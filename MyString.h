class String {
private:
    char* data;   
    int length;   

public:
    String();                          
    String(const char* str);            
    String(const String& other);       
    ~String();                          

    int size() const;                  
    bool empty() const;                
    const char* c_str() const;         
    char at(int index) const;           

    void push_back(char c);           
    void pop_back();                  
    void clear();                     
    void append(const char* str);      
    void assign(const char* str);      
    int find(char c) const;            
    void print();              
};
