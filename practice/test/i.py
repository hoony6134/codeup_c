import re
import math

def estimate_presentation_time(text):
    # 전처리: 불필요한 문자 제거 및 대소문자 구분 없애기
    text = re.sub(r'[^\w\s]', '', text)
    text = text.lower()

    # 단어 수 세기
    word_count = len(text.split())

    # 예상 발표 소요 시간 계산
    minutes = math.ceil(word_count / 200)

    return minutes

# 사용 예시
text = input("Enter your text:\n")
minutes = estimate_presentation_time(text)
print(f"Estimated presentation time: {minutes} minutes")