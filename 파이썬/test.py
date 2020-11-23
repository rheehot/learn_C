# sentence = '나는 소년입니다.'
# print(sentence)
# sentence2 = '파이썬은 쉬워요'
# print(sentence2)
# sentence3 = """
# 나는 소년이고,
# 파이썬은 쉬워요
# """
# print(sentence3)


# jumin = '990101-1234567'
# print("성별 : " + jumin[7])
# print("연 : " + jumin[:2])
# print("월일 : " + jumin[2:6])
# print("뒷자리 : " + jumin[7:])
# print("뒷자리 (뒤에서부터) : " + jumin[-7:])


# python = "Python is Amazing"
# print(python.lower())
# print(python[0].isupper())
# print(len(python))
# print(python.replace("Python", "Java"))

# index = python.index("n")
# print(index)
# index = python.index("n", index + 1)
# print(index)

# print(python.find("Java"))
# # print(python.index("Java"))
# print("hi")

# print(python.count("n"))


# print("나는 %d입니다." % 20)
# print("나는 %s을 좋아해요." % "파이썬")
# print("Apple 은 %c로 시자갷요." % "A")
# print("나는 %s입니다." % 20)
# print("나는 %s색과 %s색을 좋아해요." % ("파란", "검정"))

# print("나는 {}살입니다.".format(20))
# print("나는 {}색과 {}색을 좋아해요".format("파란", "빨간"))
# print("나는 {1}색과 {0}색을 좋아해요".format("파란", "빨간"))

# print("나는 {age}살이며, {color}색을 좋아해요".format(age=20, color="빨간"))

# age = 20
# color = "빨간"
# print(f"나는 {age}살이며, {color}색을 좋아해요.")


# print("백문이 불여일견 \n백견이 불여일타")

# print("저는 \"나도코딩\"입니다.")
# print("저는 '나도코딩'입니다.")

# print("Red Apple\rPine")  # \r 커서 맨앞으로

# print("Redd\bApple")  # \b 한글자 삭제

# print("Red\tApple")


# url = "http://google.com"
# my_str = url.replace("http://", "")
# print(my_str)
# # my_str = my_str[0:5]
# my_str = my_str[:my_str.index(".")]
# print(my_str)
# password = my_str[:3] + str(len(my_str)) + str(my_str.count("e"))
# print("{}의 비밀번호는 {}입니다.".format(url, password))

# url = "http://naver.com"
# my_url = url.replace("http://", "")
# my_url = my_url[:my_url.index(".")]
# password = my_url[:3] + str(len(my_url)) + str(my_url.count("e")) + "!"
# print(password)


# # 리스트
# subway = [10, 20, 30]
# print(subway)

# subway = ["유재석", "조세호", "박명수"]
# print(subway)

# print(subway.index("조세호"))

# subway.append("하하")
# print(subway)

# subway.insert(1, "정형돈")
# print(subway)

# print(subway.pop())
# print(subway)

# subway.append("유재석")
# print(subway)
# print(subway.count("유재석"))

# num_list = [5, 2, 4, 3, 1]
# num_list.sort()
# print(num_list)
# num_list.reverse()
# print(num_list)

# num_list.clear()
# print(num_list)

# num_list = [5, 2, 4, 3, 1]
# mix_list = ["조세호", 20, True]
# print(mix_list)

# num_list.extend(mix_list)
# print(num_list)


# cabinet = {3: "유재석", 100: "김태호"}
# print(cabinet[3])
# print(cabinet[100])

# print(cabinet.get(3))

# print(3 in cabinet)
# print(5 in cabinet)

# cabinet = {"A-3": "유재석", "B-100": "김태호"}
# print(cabinet["A-3"])
# print(cabinet.get("B-100"))

# print(cabinet)
# cabinet["A-3"] = "김종국"
# cabinet["C-20"] = "조세호"
# print(cabinet)

# del cabinet["A-3"]
# print(cabinet)

# print(cabinet.keys())
# print(cabinet.values())
# print(cabinet.items())

# cabinet.clear()
# print(cabinet)


# 튜플
# menu = ("돈까스", "치즈까스")
# print(menu[0])
# print(menu[1])

# name = "김종국"
# age = 20
# hobby = "코딩"
# print(name, age, hobby)

# (name, age, hobby) = ("김종국", 20, "코딩")
# print(name, age, hobby)


# # 세트 - 중복 안됨, 순서 없음
# my_set = {1, 2, 3, 3, 3}
# print(my_set)

# java = {"유재석", "김태호", "양세형"}
# python = set(["유재석", "박명수"])

# print(java & python)
# print(java.intersection(python))

# print(java | python)
# print(java.union(python))

# print(java - python)
# print(java.difference(python))

# python.add("김태호")
# print(python)

# java.remove("김태호")
# print(java)


# # 자료구조의 변경
# menu = {"커피", "우유", "주스"}
# print(menu, type(menu))

# menu = list(menu)
# print(menu, type(menu))

# menu = tuple(menu)
# print(menu, type(menu))

# menu = set(menu)
# print(menu, type(menu))


# from random import *
# users = range(1, 21)  # 1부터 20까지 숫자를 생성
# # print(type(users))
# users = list(users)
# # print(type(users))
# print(users)
# shuffle(users)
# print(users)

# winners = sample(users, 4)

# print("당첨자발표")
# print("치킨당첨자 : {0}".format(winners[0]))
# print("커피당첨자 : {0}".format(winners[1:]))
# print("축하합니다.")

# if문
# weather = input("오늘 날씨는 어때요? ")
# if weather == "비" or weather == "눈":
#     print("우산을 챙기세요")
# elif weather == "미세먼지":
#     print("마스크를 챙기세요")
# else:
#     print("준비물 필요 없어요")

# temp = int(input("기온은 어때요? "))
# if 30 <= temp:
#     print("너무 더워요. 나가지 마세요")
# elif 10 <= temp and temp < 30:
#     print("괜찮은 날씨에요")
# elif 0 <= temp < 10:
#     print("외투를 챙기세요")
# else:
#     print("너무 추워요. 나가지마세요")

# for문
# for waiting_no in range(1, 6):
# print("대기번호 : {0}".format(waiting_no))

# starbucks = ["아이언맨", "토르", "그루트"]
# for customer in starbucks:
#     print("{0}, 커피가 준비되었습니다.".format(customer))


# customer = "토르"
# index = 5
# while index >= 1:
#     print("{0}, 커피가 준비 되었습니다. {1} 번 남았어요.".format(customer, index))
#     index -= 1
#     if index == 0:
#         print("커피는 폐기처분되었습니다.")

# customer = "아이언맨"
# index = 1
# while True:
#     print("{0}, 커피가 준비되었습니다. 호출 {1} 회".format(customer, index))
#     index += 1

# customer = "토르"
# person = "Unknown"
# while person != customer:
#     print("{0}, 커피가 준비되었습니다.".format(customer))
#     person = input("이름이 어떻게 되세요? ")


# absent = [2, 5]  # 결석
# no_book = [7]  # 책을 깜빡
# for student in range(1, 11):  # 1~10
#     if student in absent:
#         continue
#     elif student in no_book:
#         print("오늘수업 끝. {0}는 교무실로".format(student))
#         break
#     print("{0}, 책을 읽어봐".format(student))


# # 한 줄 for문
# students = [1, 2, 3, 4, 5]
# print(students)
# students = [i + 100 for i in students]
# print(students)

# students = ["Iron man", "Thor", "Im groot"]
# students = [len(i) for i in students]
# print(students)

students = ["Iron man", "Thor", "Im groot"]
students = [i.upper() for i in students]
print(students)
