# include  < cassert >

шаблон < typename T>
класс  TPQueue
{
  // Сюда помещено описание структуры "Очередь с приоритами"
    структура  ПУНКТ
    {
        Данные Т;
        ПУНКТ * следующий;
    };
общественности:
    TPQueue (): head ( nullptr ), tail ( nullptr ) {}
    ~ TPQueue ();
    void  push ( const T &);
    T pop ();
    void  print () const ;
частный:
    TPQueue :: ITEM * create ( const T &);
    ПУНКТ * руководитель;
    ПУНКТ * u;
    ПУНКТ * Хвост;
};
шаблон < typename T>
имя типа TPQueue <T> :: ITEM * TPQueue <T> :: create ( const T & data)
{
    ПУНКТ * пункт = новый ПУНКТ;
    item-> data = data;
    item-> next = nullptr ;
    возврат товара;
}
шаблон < typename T>
TPQueue <T> :: ~ TPQueue ()
{
    пока (голова)
        pop ();
}
шаблон < typename T>
void TPQueue <T> :: push ( const T & inf)
{
    if (head == nullptr )
    {
        голова = создать (инф);
        и = голова;
        хвост = голова;
    }
    иначе  if (tail-> data . prior > = inf. prior )
    {

        if (tail-> data . prior == инф. prior && tail-> data . ch == инф. ch )
        {

            tail-> data = inf;

        }
        еще
        {
            if (tail-> data . prior > = inf. prior && tail-> data . ch ! = inf. ch )
            {
                tail-> next = create (inf);
                хвост = хвост-> следующий ;
            }
        }
    }
    еще
    {

        if (tail-> data . prior <inf. prior 
