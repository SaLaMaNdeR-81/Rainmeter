from persiantools.jdatetime import JalaliDate

JDate = JalaliDate.today()
Months = [
    "Farvardin", "Ordibehesht", "Khordad",
    "Tir", "Mordad", "Shahrivar",
    "Mehr", "Aban", "Azar",
    "Dey","Bahman", "Esfand"
]

day = JDate.day
Year = JDate.year
month = Months[JDate.month - 1]

# Output = f"{day} {month}, {Year}"
Output = f"{day} {month}"

print(Output)
