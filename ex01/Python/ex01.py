# Python 3.7.9
# input() : 표준 입력장치(키보드)로 부터 문자열을 입력 받음
# input("문자열") : 문자열을 출력하고 표준 입력장치(키보드)로 부터 문자열 입력받음
# 입력된 모든 값은 문자열
# 사용자가 EOF(*nix: Ctrl-D, Windows: Ctrl-Z+CR) 입력 시,
# EOFError 발생시킴
name = input("What is your name? ")

# print("Hello" + " " + World) = print("Hello", "World")
# print("Hello,", name + ", nice to meet you!")
print("Hello, {0}, nice to meet you!".format(name))