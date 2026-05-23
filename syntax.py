# import requests
# from bs4 import BeautifulSoup


# def decode_secret_message(doc_url):
#     # Fetch the document content
#     response = requests.get(doc_url, timeout=10)
#     soup = BeautifulSoup(response.text, "html.parser")

#     data = []
#     table = soup.find("table")

#     # Parse table rows, skipping the header row
#     for row in table.find_all("tr")[1:]:
#         cols = row.find_all("td")
#         if len(cols) == 3:
#             # Extract x, char, and y from the columns
#             x = int(cols[0].get_text(strip=True))
#             char = cols[1].get_text(strip=True)
#             y = int(cols[2].get_text(strip=True))
#             data.append((x, char, y))

#     # Determine the boundaries of the grid
#     max_x = max(x for x, _, _ in data)
#     max_y = max(y for _, _, y in data)

#     # Initialize a 2D array filled with spaces
#     grid = [[" " for _ in range(max_x + 1)] for _ in range(max_y + 1)]

#     # Place each character in its designated coordinate
#     for x, char, y in data:
#         grid[y][x] = char

#     # Print the grid from top to bottom (highest y down to 0)
#     for y in range(max_y, -1, -1):
#         print("".join(grid[y]))


# # Execute the function to find the secret message
# url = "https://docs.google.com/document/d/e/2PACX-1vSvM5gDlNvt7npYHhp_XfsJvuntUhq184By5xO_pA4b_gCWeXb6dM6ZxwN8rE6S4ghUsCj2VKR21oEP/pub"
# decode_secret_message(doc_url=url)
