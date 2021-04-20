from PyPDF2 import PdfFileMerger

pdfs = ['C:/Users/HARI-PC/Desktop/file1.pdf', 'C:/Users/HARI-PC/Desktop/file2.pdf']

merger = PdfFileMerger()

for pdf in pdfs:
    merger.append(pdf)

merger.write("C:/Users/HARI-PC/Desktop/result.pdf")
print("Done Merging")
merger.close()
