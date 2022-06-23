int main()
{
    setlocale(LC_CTYPE, "russian");
    int* mas, n, sum;
    sum = 0;
    cout << "Vvedite razmer mas: ";
    cin >> n;
    mas = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]= ";
        cin >> mas[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (mas[i] % 2 == 1)
            sum += mas[i];
    }
    cout << "Sum nechetnix " << sum;
    cin.get(); cin.get();
    return 0;