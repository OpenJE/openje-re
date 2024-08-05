import generator
import tkinter as tk
from tkinter import filedialog, messagebox, scrolledtext

class App:
    def __init__(self, root):
        self.root = root
        self.root.title("Structure Generator")
        self.root.geometry("800x600")  # Set initial size
        self.root.rowconfigure(4, weight=1)  # Make the row with the text widget expandable
        self.root.columnconfigure(1, weight=1)  # Make the column with the main content expandable

        self.json_path = tk.StringVar()
        self.output_dir = tk.StringVar()
        self.structure_name = tk.StringVar()

        self.create_widgets()

    def create_widgets(self):
        tk.Label(self.root, text="JSON Path:").grid(row=0, column=0, padx=10, pady=5, sticky="e")
        tk.Entry(self.root, textvariable=self.json_path, width=50).grid(row=0, column=1, padx=10, pady=5, sticky="ew")
        tk.Button(self.root, text="Browse", command=self.browse_json).grid(row=0, column=2, padx=10, pady=5)

        tk.Label(self.root, text="Output Directory:").grid(row=1, column=0, padx=10, pady=5, sticky="e")
        tk.Entry(self.root, textvariable=self.output_dir, width=50).grid(row=1, column=1, padx=10, pady=5, sticky="ew")
        tk.Button(self.root, text="Browse", command=self.browse_output_dir).grid(row=1, column=2, padx=10, pady=5)

        tk.Label(self.root, text="Structure Name:").grid(row=2, column=0, padx=10, pady=5, sticky="e")
        tk.Entry(self.root, textvariable=self.structure_name, width=50).grid(row=2, column=1, padx=10, pady=5, sticky="ew")

        tk.Button(self.root, text="Generate Structure", command=self.generate_structure).grid(row=3, column=0, columnspan=3, pady=10)

        self.output_text = scrolledtext.ScrolledText(self.root, width=80, height=20)
        self.output_text.grid(row=4, column=0, columnspan=3, padx=10, pady=10, sticky="nsew")

    def browse_json(self):
        file_path = filedialog.askopenfilename(filetypes=[("JSON files", "*.json")])
        if file_path:
            self.json_path.set(file_path)

    def browse_output_dir(self):
        dir_path = filedialog.askdirectory()
        if dir_path:
            self.output_dir.set(dir_path)

    def generate_structure(self):
        json_path = self.json_path.get()
        output_dir = self.output_dir.get()
        structure_name = self.structure_name.get()

        if not json_path or not output_dir or not structure_name:
            messagebox.showerror("Error", "Please fill in all fields.")
            return

        try:
            gen = generator.Generator(json_path, output_dir)
            structure_string = gen.generate_structure( structure_name )
            self.output_text.delete(1.0, tk.END)
            self.output_text.insert(tk.END, structure_string)
        except Exception as e:
            messagebox.showerror("Error", str(e))

if __name__ == "__main__":
    root = tk.Tk()
    app = App(root)
    root.mainloop()