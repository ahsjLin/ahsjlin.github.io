void perm(char *list, int i, int n){
    int j, temp;
    if(i==n){
        for(j=0; j<=n; j++){
            cout << list[j];
        }
        cout << endl;
    }
    else{
        for(j=i; j<=n; j++){
            SWAP(list[i], list[j], temp);

            perm(list, i+1, n);

            SWAP(list[i], list[j], temp);
        }
    }
}
