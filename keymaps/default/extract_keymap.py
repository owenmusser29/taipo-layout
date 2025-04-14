import re

def extract_comments(c_file_path, output_file_path):
    try:
        with open(c_file_path, 'r') as c_file:
            code = c_file.read()

        # Regex pattern to match single-line and multi-line comments
        comment_pattern = r'(?://.*?$)|(?:/\*.*?\*/)'  # Single-line and multi-line comments

        # Find all comments in the code
        comments = re.findall(comment_pattern, code, re.DOTALL | re.MULTILINE)

        # Write comments to the output file
        with open(output_file_path, 'w') as output_file:
            output_file.write("\n".join(comments))

        print(f"Comments extracted successfully to {output_file_path}")
    except FileNotFoundError:
        print(f"Error: The file {c_file_path} was not found.")
    except Exception as e:
        print(f"An error occurred: {e}")

# Example usage
c_file_path = "keymap.c"  # Replace with the path to your C file
output_file_path = "keymap.txt"  # Replace with the desired output file path
extract_comments(c_file_path, output_file_path)
