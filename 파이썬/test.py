# sentence = '���� �ҳ��Դϴ�.'
# print(sentence)
# sentence2 = '���̽��� ������'
# print(sentence2)
# sentence3 = """
# ���� �ҳ��̰�,
# ���̽��� ������
# """
# print(sentence3)


# jumin = '990101-1234567'
# print("���� : " + jumin[7])
# print("�� : " + jumin[:2])
# print("���� : " + jumin[2:6])
# print("���ڸ� : " + jumin[7:])
# print("���ڸ� (�ڿ�������) : " + jumin[-7:])


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


# print("���� %d�Դϴ�." % 20)
# print("���� %s�� �����ؿ�." % "���̽�")
# print("Apple �� %c�� ���ځc��." % "A")
# print("���� %s�Դϴ�." % 20)
# print("���� %s���� %s���� �����ؿ�." % ("�Ķ�", "����"))

# print("���� {}���Դϴ�.".format(20))
# print("���� {}���� {}���� �����ؿ�".format("�Ķ�", "����"))
# print("���� {1}���� {0}���� �����ؿ�".format("�Ķ�", "����"))

# print("���� {age}���̸�, {color}���� �����ؿ�".format(age=20, color="����"))

# age = 20
# color = "����"
# print(f"���� {age}���̸�, {color}���� �����ؿ�.")


# print("�鹮�� �ҿ��ϰ� \n����� �ҿ���Ÿ")

# print("���� \"�����ڵ�\"�Դϴ�.")
# print("���� '�����ڵ�'�Դϴ�.")

# print("Red Apple\rPine")  # \r Ŀ�� �Ǿ�����

# print("Redd\bApple")  # \b �ѱ��� ����

# print("Red\tApple")


# url = "http://google.com"
# my_str = url.replace("http://", "")
# print(my_str)
# # my_str = my_str[0:5]
# my_str = my_str[:my_str.index(".")]
# print(my_str)
# password = my_str[:3] + str(len(my_str)) + str(my_str.count("e"))
# print("{}�� ��й�ȣ�� {}�Դϴ�.".format(url, password))

# url = "http://naver.com"
# my_url = url.replace("http://", "")
# my_url = my_url[:my_url.index(".")]
# password = my_url[:3] + str(len(my_url)) + str(my_url.count("e")) + "!"
# print(password)


# # ����Ʈ
# subway = [10, 20, 30]
# print(subway)

# subway = ["���缮", "����ȣ", "�ڸ��"]
# print(subway)

# print(subway.index("����ȣ"))

# subway.append("����")
# print(subway)

# subway.insert(1, "������")
# print(subway)

# print(subway.pop())
# print(subway)

# subway.append("���缮")
# print(subway)
# print(subway.count("���缮"))

# num_list = [5, 2, 4, 3, 1]
# num_list.sort()
# print(num_list)
# num_list.reverse()
# print(num_list)

# num_list.clear()
# print(num_list)

# num_list = [5, 2, 4, 3, 1]
# mix_list = ["����ȣ", 20, True]
# print(mix_list)

# num_list.extend(mix_list)
# print(num_list)


# cabinet = {3: "���缮", 100: "����ȣ"}
# print(cabinet[3])
# print(cabinet[100])

# print(cabinet.get(3))

# print(3 in cabinet)
# print(5 in cabinet)

# cabinet = {"A-3": "���缮", "B-100": "����ȣ"}
# print(cabinet["A-3"])
# print(cabinet.get("B-100"))

# print(cabinet)
# cabinet["A-3"] = "������"
# cabinet["C-20"] = "����ȣ"
# print(cabinet)

# del cabinet["A-3"]
# print(cabinet)

# print(cabinet.keys())
# print(cabinet.values())
# print(cabinet.items())

# cabinet.clear()
# print(cabinet)


# Ʃ��
# menu = ("���", "ġ��")
# print(menu[0])
# print(menu[1])

# name = "������"
# age = 20
# hobby = "�ڵ�"
# print(name, age, hobby)

# (name, age, hobby) = ("������", 20, "�ڵ�")
# print(name, age, hobby)


# # ��Ʈ - �ߺ� �ȵ�, ���� ����
# my_set = {1, 2, 3, 3, 3}
# print(my_set)

# java = {"���缮", "����ȣ", "�缼��"}
# python = set(["���缮", "�ڸ��"])

# print(java & python)
# print(java.intersection(python))

# print(java | python)
# print(java.union(python))

# print(java - python)
# print(java.difference(python))

# python.add("����ȣ")
# print(python)

# java.remove("����ȣ")
# print(java)


# # �ڷᱸ���� ����
# menu = {"Ŀ��", "����", "�ֽ�"}
# print(menu, type(menu))

# menu = list(menu)
# print(menu, type(menu))

# menu = tuple(menu)
# print(menu, type(menu))

# menu = set(menu)
# print(menu, type(menu))


# from random import *
# users = range(1, 21)  # 1���� 20���� ���ڸ� ����
# # print(type(users))
# users = list(users)
# # print(type(users))
# print(users)
# shuffle(users)
# print(users)

# winners = sample(users, 4)

# print("��÷�ڹ�ǥ")
# print("ġŲ��÷�� : {0}".format(winners[0]))
# print("Ŀ�Ǵ�÷�� : {0}".format(winners[1:]))
# print("�����մϴ�.")

# if��
# weather = input("���� ������ ���? ")
# if weather == "��" or weather == "��":
#     print("����� ì�⼼��")
# elif weather == "�̼�����":
#     print("����ũ�� ì�⼼��")
# else:
#     print("�غ� �ʿ� �����")

# temp = int(input("����� ���? "))
# if 30 <= temp:
#     print("�ʹ� ������. ������ ������")
# elif 10 <= temp and temp < 30:
#     print("������ ��������")
# elif 0 <= temp < 10:
#     print("������ ì�⼼��")
# else:
#     print("�ʹ� �߿���. ������������")

# for��
# for waiting_no in range(1, 6):
# print("����ȣ : {0}".format(waiting_no))

# starbucks = ["���̾��", "�丣", "�׷�Ʈ"]
# for customer in starbucks:
#     print("{0}, Ŀ�ǰ� �غ�Ǿ����ϴ�.".format(customer))


# customer = "�丣"
# index = 5
# while index >= 1:
#     print("{0}, Ŀ�ǰ� �غ� �Ǿ����ϴ�. {1} �� ���Ҿ��.".format(customer, index))
#     index -= 1
#     if index == 0:
#         print("Ŀ�Ǵ� ���ó�еǾ����ϴ�.")

# customer = "���̾��"
# index = 1
# while True:
#     print("{0}, Ŀ�ǰ� �غ�Ǿ����ϴ�. ȣ�� {1} ȸ".format(customer, index))
#     index += 1

# customer = "�丣"
# person = "Unknown"
# while person != customer:
#     print("{0}, Ŀ�ǰ� �غ�Ǿ����ϴ�.".format(customer))
#     person = input("�̸��� ��� �Ǽ���? ")


# absent = [2, 5]  # �Ἦ
# no_book = [7]  # å�� ����
# for student in range(1, 11):  # 1~10
#     if student in absent:
#         continue
#     elif student in no_book:
#         print("���ü��� ��. {0}�� �����Ƿ�".format(student))
#         break
#     print("{0}, å�� �о��".format(student))


# # �� �� for��
# students = [1, 2, 3, 4, 5]
# print(students)
# students = [i + 100 for i in students]
# print(students)

# students = ["Iron man", "Thor", "Im groot"]
# students = [len(i) for i in students]
# print(students)

# students = ["Iron man", "Thor", "Im groot"]
# students = [i.upper() for i in students]
# print(students)
