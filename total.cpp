#include <iostream>

using namespace std;

// arr[]는 점수를 저장하는 배열이고, size는 배열의 크기
// 배열에 있는 점수들을 모두 더해서 total에 저장하고, 그 값을 반환
int sum(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

// total을 size로 나누어 평균을 구하고
// size를 duoble로 형변환해서 더 정확한 평균을 계산함
double avg(int total, int size) {
    return total / (double)size;
}


// 오름차순 정렬: sortAscending
// 첫 번째 for문: 순차적으로 비교할 첫 번째 점수를 선택
// 두 번째 for문: 첫 번째 점수와 나머지 점수를 비교
// if: arr[i] > arr[k]라면 두 값을 교환함
// 교환은 temp라는 임시 변수를 사용함
void sortAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int k = i + 1; k < size; k++) {
            if (arr[i] > arr[k]) {
                int temp = arr[i];
                arr[i] = arr[k];
                arr[k] = temp;
            }
        }
    }
}

// 내림차순 정렬: sortDescending
// 비교 조건을 올림차순과 반대로 arr[i] < arr[k]로 함
void sortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int k = i + 1; k < size; k++) {
            if (arr[i] < arr[k]) {
                int temp = arr[i];
                arr[i] = arr[k];
                arr[k] = temp;
            }
        }
    }
}

int main() {
    // 크기가 5인 배열 선언
    int scores[5];

    // 사용자로부터 5명의 점수 입력 받기
    cout << "학생 5명의 점수를 입력하세요" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "학생" << i + 1 << "의 점수: ";
        cin >> scores[i];
    }

    // 총합 계산: sum 함수를 호출해 배열의 총합을 구하고, total에 값을 저장
    int total = sum(scores, 5);

    // 평균 계산: avg 함수를 호출해 평균을 구하고, average에 값을 저장
    double average = avg(total, 5);

    cout << "총합: " << total << endl;
    cout << "평균: " << average << endl;

    // 오름차순 정렬
    sortAscending(scores, 5);
    cout << "오름차순 정렬 점수: ";
    for (int i = 0; i < 5; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;

    // 내림차순 정렬
    sortDescending(scores, 5);
    cout << "내림차순 정렬 점수: ";
    for (int i = 0; i < 5; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;


    return 0;
}