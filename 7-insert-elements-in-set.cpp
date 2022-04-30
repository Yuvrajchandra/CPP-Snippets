#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<string> st;

    st.insert("Make");
    st.insert("Use");
    st.insert("Of");
    st.insert("Of");

    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
