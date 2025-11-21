#include <iostream>
#include <string>

class Screen {
    using pos = std::string::size_type;
    friend class Window_mgr;

    private:
        pos cursor = 0;
        pos height = 0, width = 0;
        std::string contents;

        void do_display(std::ostream &os) const { os << contents; }

    public:
        Screen() = default;
        Screen(pos ht, pos wd): height(ht), width(wd), contents(ht * wd, ' '){}
        Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c){}

        char get() const { return contents[cursor]; }
        char get(pos r, pos c) const { return contents[r * width + c]; }
    
        const Screen& display(std::ostream &os) const { do_display(os); return *this; }
        Screen& display(std::ostream &os) { do_display(os); return *this; }
    
        Screen& move(pos r, pos c);
        Screen& set(char c);
};

inline Screen &Screen::move(pos r, pos c){
    cursor = r * width + c;
    return *this;
}

inline Screen &Screen::set(char c){
    contents = std::string(height * width, c);
    return *this;
}

class Window_mgr {
    using ScreenIndex = std::vector<Screen>::size_type;

    private:
        std::vector<Screen> screens{ Screen(24, 80, ' ') };

    public:
        void clear(ScreenIndex);
};
    
void Window_mgr::clear(ScreenIndex i){
    Screen& s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}
