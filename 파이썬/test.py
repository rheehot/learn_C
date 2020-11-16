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
