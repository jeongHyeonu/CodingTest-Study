//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int solution(vector<int> citations) {
//    int answer = 0;
//
//    sort(citations.begin(), citations.end(), greater<>());
//
//    for (int i = 0; i < citations.size(); i++)
//    {
//        if ((citations[i] >= i + 1))
//        {
//            answer++;
//        }
//        else
//            break;
//
//    }
//
//    return answer;
//}
//
//int main()
//{
//    vector<int> test = { 4, 3, 3, 3, 0, 0, 0 };
//    vector<int> test2 = {1, 0, 0, 0 };
//    vector<int> test3 = { 3, 1, 5, 0, 6 };
//    solution(test2);
//}