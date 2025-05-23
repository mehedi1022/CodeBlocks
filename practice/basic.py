# Analyze User Reviews

n = int(input("Enter How many revews: "))

arr = []
for i in range(n):
  print(f"Enter {i + 1} review: ")
  id = int(input("Enter id: "))
  rating = int(input("Enter Rating: "))
  review = input("Enter review: ").lower()
  date = input("Enter date(YYYY-MM-DD): ")

  reviewDic = {
    "id": id,
    "rating": rating,
    "review": review,
    "date": date  
  }

  arr.append(reviewDic)

print("\nArray\n")
for i in arr:
  print(i)

# average of rating
totalRat = 0
for i in arr:
  for key, value in i.items():
    if key == "rating":
      totalRat += value

avg = totalRat / len(arr)
print("Average : ", avg)

# Analyze Words and Months 
# words

STOPWORDS = set(["the", "and", "a", "to", "of", "in", "but", "some",
"is", "it", "i", "for", "on", "with", "was"])

punctuation = ".,!?;:'\"()[]{}"

count = {}

for i in arr:
  for key, value in i.items():
    if key == "review":
      text = value

      onlyText = ""
      for i in text:
        if i not in punctuation:
          onlyText = onlyText + i

      words = onlyText.lower().split()

      for i in words:
        if i not in STOPWORDS:
          if i in count:
            count[i] = count[i] + 1
          else:
            count[i] = 1 

if count:
  maxFreq = max(count.values())
else:
  maxFreq = 0
      
mostCommon = []

for key, value in count.items():
  if value == maxFreq:
    mostCommon.append(key)
mostCommon.sort()

print("Common Words: ", mostCommon)

#Month

monthAll = {
  "01" : "January", "02" : "February", "03" : "March", "04" : "April", "05" : "May", "06" : "June", "07" : "July", "08" : "August", "09" : "September", "10" : "October", "11" : "November", "12" : "December"
}

countMonth = {}

for i in arr:
  for key, value in i.items():
    if key == "date":
      date = value

    parts = date.split("-")
    monthNum = parts[1]

    if monthNum in monthAll:
      monthName = monthAll[monthNum]
    else:
      monthName = "Unknown" 
    
    if monthName in countMonth:
      countMonth[monthName] = countMonth[monthName] + 1
    else:
      countMonth[monthName] = 1
    
mostValue = max(countMonth.values())

mostMonth = []
for key, value in countMonth.items():
  if value == mostValue:
    mostMonth.append(key)

print(mostMonth)