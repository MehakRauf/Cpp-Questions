#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    std::string line_;
    ifstream file_("TestCase_01.txt");
    if(file_.is_open()){
        while(getline(file_,line_)){
            std::cout<<line_<<'\n';
        }
        file_.close();
    }
    else{
        std::cout<<"file not open"<<'\n';
        std::cin.get();
        return 0;
    }
}
// void Show(int Enteries, int Arr[])
// {
//     for (int i = 0; i < Enteries; i++)
//     {
//         cout << Arr[i] << '\t';
       
//     }
// }
// void readFromFile(char fileName[], int storage[], int &total)
// {
//     ifstream take(fileName);
//     take >> total;
//     char c[total];
//     for (int i = 0; i < total; i++)
//     {
//         take >> storage[i];
//         take>>c[i];
//     }
 
// }
// int BribedQueue(int arr[], int size)
// {
//     int gap, bribes = 0;
//     for (int i = 0; i < size; i++)
//     {
//         int hold = arr[i];
//         gap = i - 1;
//         while (gap >= 0 && hold < arr[gap])
//         {
//             int temp = arr[gap + 1];
//             arr[gap + 1] = arr[gap];
//             arr[gap] = temp;
//             bribes++;
//         }
//     }
//     return bribes;
// }

// int GoingOffTheCharts(int arr[], int size)
// {

//     int max_wh[size];
//     int wh = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > 6)
//         {
//             wh++;
//             max_wh[i] = wh;
//         }
//         else
//         {
//             wh = 0;
//             max_wh[i] = wh;
//         }
//     }
//     int min = max_wh[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (min < max_wh[i])
//         {
//             min = max_wh[i];
//         }
//     }
//     return min;
// }
// int FixingCodeInProduction(int arr[], int size)
// {
//     int l = 0, r = size;
//     for (int i = 0; i < size; i++)
//     {
//         int mid = (l + r) / 2;
//         if (arr[mid] == 128)
//         {
//             return mid;
//         }
//         if (arr[mid] > 128)
//         {
//             r = mid;
//         }
//         else
//         {
//             l = mid;
//         }
//     }
//     return -1;
// }
// int SelectingTheMedian(int arr[], int size)
// {
//     int hold, j, median;
//     for (int i = 0; i < size; i++)
//     {
//         hold = arr[i];
//         j = i - 1;
//         while (j >= 0 && hold < arr[j])
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = hold;
//     }
//     cout<<arr[262]<<endl;
//     if (size % 2 != 0)
//     {
//         median = arr[size / 2];
//     }
//     else
//     {
//         median = (arr[size / 2 + 1] + arr[size / 2]) / 2;
//     }
//     return median;
// }

// int main()
// {
//     int count, stor[100];
//     char filename[10] = {"a.txt"};
//     readFromFile(filename, stor, count);
//     Show(count, stor);
//     //int arr[] = {852, 258, 134, 213, 345, 109, 27, 656, 233, 689, 40, 401, 458, 864, 97, 778, 199, 639, 822, 463, 255, 281, 158, 397, 168, 607, 105, 578, 324, 245, 994, 700, 148, 590, 840, 225, 221, 628, 936, 412, 465, 773, 822, 746, 671, 924, 203, 680, 284, 666, 924, 973, 17, 100, 228, 717, 664, 745, 212, 253, 616, 367, 519, 353, 920, 69, 72, 859, 965, 910, 257, 940, 935, 682, 809, 464, 532, 73, 802, 498, 58, 734, 266, 924, 116, 587, 62, 223, 728, 999, 121, 608, 542, 272, 573, 229, 894, 227, 412, 257};
//     // int arr[]={447,819,180,117,386,229,667,28,55,553,870,614,276,268,900,770,609,439,62,259,216,203,790,311,287,477,381,624,22,212,324,845,92,68,235,731,423,983,763,819,776,232,889,326,588,563,473,705,610,730,864,822,628,286,279,572,554,781,799,960,249,776,421,271,36,728,757,149,842,806,479,854,124,651,194,555,50,968,927,571,283,354,154,553,30,779,588,256,935,94,972,258,671,200,555,655,303,481,658,334,436,575,164,783,78,388,11,43,14,727,731,842,837,751,372,432,706,857,128,528,619,643,780,861,882,449,706,309,202,662,743,219,474,894,84,413,847,191,633,457,752,891,825,539,884,5,784,625,769,677,532,593,201,630,286,545,383,810,119,350,52,689,455,465,625,645,889,967,355,552,247,894,428,936,812,423,693,722,212,916,365,175,868,708,738,308,794,634,201,533,581,217,296,695,701,866,351,415,59,33,82,625,822,426,363,272,675,358,833,921,957,799,268,174,385,956,671,900,349,784,916,682,1000,775,809,612,288,839,567,781,571,618,634,838,744,744,69,465,891,863,474,388,235,613,90,344,305,550,879,385,896,959,127,788,16,682,901,414,616,388,55,687,356,840,425,427,704,327,911,37,917,468,209,390,446,889,915,307,65,155,11,530,743,245,495,886,295,867,479,109,833,481,686,861,633,494,126,320,919,893,861,851,237,605,397,317,695,186,406,767,774,88,469,545,897,67,365,120,692,619,10,973,466,608,344,806,36,362,925,589,383,46,230,460,65,544,173,324,34,334,561,19,709,776,146,614,128,726,800,654,179,93,629,10,593,274,50,940,758,308,805,434,903,547,368,714,437,738,622,161,403,351,229,615,396,59,748,608,664,105,972,762,946,230,17,381,102,469,573,399,221,759,590,68,134,873,919,222,796,568,310,896,318,100,326,806,266,170,998,956,391,790,245,326,644,623,963,735,303,801,499,924,827,19,988,124,577,797,680,9,78,325,476,780,801,412,155,837,176,95,687,892,966,792,159,441,812,489,441,622,475,310,897,253,959,249,259,585,696,682,609,171,166,828,416,666,63,843,315,233,860,371,460,780,958,68,269,808,498,50,464,94,88,318,248,407,442,691,821,929,36,650,45,203,813,29,863,270,943,965,859,717,986,53,740,568,549,103,780,270,963,626,268,35,736,147,29,825,721,731,483,416,989,875,132};
//     // int size = 525;
//     // int median = SelectingTheMedian(arr, size);
//     // for(int i=0; i<size; i++){
    //     cout<<i<<" "<<arr[i]<< " "<<endl;
    // }
    // cout<<endl;
    // cout << median;
    // int arr[]={1, 2, 3, 4, 5, 8, 6, 7};
    // cout<<endl;
    //  cout<<BribedQueue(stor, count);
    // // int arr[] = {7, 8, 9, 9, 8, 6, 7, 8, 8, 8, 10, 12, 6, 7, 7, 8};
    // // cout << GoingOffTheCharts(arr, 16);
    // // int arr[]={2, 4, 8, 16, 32, 64, 128, 256, 512};
    // // int result=FixingCodeInProduction(arr,8);
    // if(result !=-1){
    //     cout<<"The number is found at "<<result;
    // }
    // else{
    //     cout<<"Number is not found.";
    // }
//}