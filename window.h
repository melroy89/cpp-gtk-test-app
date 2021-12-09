#include <gtkmm.h>

class MainWindow : public Gtk::Window
{
public:
  MainWindow();

protected:
  Gtk::Box m_vbox;
  Gtk::Box m_hbox;
  Gtk::Button m_button;
  Gtk::MenuBar m_menu;
  Gtk::MenuItem m_menuItem1;
  Gtk::MenuItem m_menuItem2;
  Gtk::Menu m_submenu1;
  Gtk::Menu m_submenu2;
  Gtk::TextView m_textview;
};
