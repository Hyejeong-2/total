#include <iostream>

using namespace std;

// arr[]�� ������ �����ϴ� �迭�̰�, size�� �迭�� ũ��
// �迭�� �ִ� �������� ��� ���ؼ� total�� �����ϰ�, �� ���� ��ȯ
int sum(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

// total�� size�� ������ ����� ���ϰ�
// size�� duoble�� ����ȯ�ؼ� �� ��Ȯ�� ����� �����
double avg(int total, int size) {
    return total / (double)size;
}


// �������� ����: sortAscending
// ù ��° for��: ���������� ���� ù ��° ������ ����
// �� ��° for��: ù ��° ������ ������ ������ ��
// if: arr[i] > arr[k]��� �� ���� ��ȯ��
// ��ȯ�� temp��� �ӽ� ������ �����
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

// �������� ����: sortDescending
// �� ������ �ø������� �ݴ�� arr[i] < arr[k]�� ��
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
    // ũ�Ⱑ 5�� �迭 ����
    int scores[5];

    // ����ڷκ��� 5���� ���� �Է� �ޱ�
    cout << "�л� 5���� ������ �Է��ϼ���" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "�л�" << i + 1 << "�� ����: ";
        cin >> scores[i];
    }

    // ���� ���: sum �Լ��� ȣ���� �迭�� ������ ���ϰ�, total�� ���� ����
    int total = sum(scores, 5);

    // ��� ���: avg �Լ��� ȣ���� ����� ���ϰ�, average�� ���� ����
    double average = avg(total, 5);

    cout << "����: " << total << endl;
    cout << "���: " << average << endl;

    // �������� ����
    sortAscending(scores, 5);
    cout << "�������� ���� ����: ";
    for (int i = 0; i < 5; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;

    // �������� ����
    sortDescending(scores, 5);
    cout << "�������� ���� ����: ";
    for (int i = 0; i < 5; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;


    return 0;
}