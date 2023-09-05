import tkinter as tk
from tkinter import messagebox
import openpyxl
from PIL import Image, ImageDraw, ImageFont

def add_data():
    data = [data_entries[i].get() for i in range(len(column_names))]
    if all(data):
        try:
            wb = openpyxl.load_workbook('haf_data.xlsx')
            sheet = wb.active
            sheet.append(data)
            wb.save('haf_data.xlsx')
            for entry in data_entries:
                entry.delete(0, 'end')
            messagebox.showinfo('Success', 'Data added successfully!')
        except Exception as e:
            messagebox.showerror('Error', str(e))
    else:
        messagebox.showerror('Error', 'Please enter data for all columns.')

# Load column names from the Excel file
def load_column_names():
    try:
        wb = openpyxl.load_workbook('haf_data.xlsx')
        sheet = wb.active
        column_names.extend(sheet[2])
    except Exception as e:
        messagebox.showerror('Error', 'Failed to load column names. Please ensure "haf_data.xlsx" exists and is formatted correctly.')
        root.destroy()

# Create an image with Arabic text
def create_arabic_text_image(text, width, height):
    image = Image.new('RGB', (width, height), 'white')
    draw = ImageDraw.Draw(image)
    # Use a font that supports Arabic text, for example, 'DejaVuSans' or 'NotoNaskhArabic'
    font = ImageFont.load_default()
    draw.text((5, 5), text, fill='black', font=font, direction="rtl")
    return image

# Create the main window
root = tk.Tk()
root.title('Excel Data Entry')

column_names = []
load_column_names()

data_entries = []

# Create data entry fields for each column with labels
for i, column_name in enumerate(column_names):
    label_image = create_arabic_text_image(column_name.value, 200, 30)
    label = tk.Label(root, image=label_image)
    label.grid(row=i, column=0, padx=10, pady=5)
    entry = tk.Entry(root)
    entry.grid(row=i, column=1, padx=10, pady=5)
    data_entries.append(entry)

# Create and configure add data button
add_button = tk.Button(root, text='Add Data', command=add_data)
add_button.grid(row=len(column_names), columnspan=2, pady=10)

# Start the main loop
root.mainloop()
