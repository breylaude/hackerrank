/* Author: Ignas Laude
 * Date: 09/19/22 2:57 AM
*/


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        int n,q,x;
    cin >> n;
    vector<int> v,a ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> x;
        v.push_back(x); 
    } 
        cin >> q;
    for(int i=0 ; i<q ;i++)
    {
        cin >> x;
        auto low = lower_bound(v.begin(),v.end(),x);
       if(v[low-v.begin()]==x){
           cout << "Yes " <<  low-v.begin()+1 << '\n';
       }
       else cout << "No " <<  low-v.begin()+1 << '\n';
    }   
    return 0;
}
