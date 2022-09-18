/* Author: Ignas Laude
 * Date: 09/19/22 2:55 AM
*/ 

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,x,y,a,b;
    vector<int> v;
     cin >> n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cin >> y >> a >> b;
    v.erase(v.begin()+y-1);
    v.erase(v.begin()+a-1,v.begin()+b-1);
    cout << v.size() << '\n';
    for(int i=0 ; i<v.size() ;i++)
    {
        cout << v[i] << ' ';
    } 
    return 0;
}
