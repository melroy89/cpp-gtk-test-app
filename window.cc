#include "window.h"

MainWindow::MainWindow()
    : m_vbox(Gtk::ORIENTATION_VERTICAL),
      m_button("Hello World"),
      m_menuItem1("File"),
      m_menuItem2("Help")
{
  set_title("C++ GTK Example App");
  set_default_size(1000, 680);
  set_position(Gtk::WIN_POS_CENTER);

  auto textViewBuffer = m_textview.get_buffer();
  textViewBuffer->set_text("Hello");

  // Menu
  auto menuItem1 = Gtk::manage(new Gtk::MenuItem("New File"));
  auto menuItem2 = Gtk::manage(new Gtk::MenuItem("Open File..."));
  auto menuItem3 = Gtk::manage(new Gtk::MenuItem("Quit"));
  auto menuItem4 = Gtk::manage(new Gtk::MenuItem("About"));

  m_submenu1.append(*menuItem1);
  m_submenu1.append(*menuItem2);
  m_submenu1.append(*menuItem3);
  m_submenu2.append(*menuItem4);

  m_menuItem1.set_submenu(m_submenu1);
  m_menuItem2.set_submenu(m_submenu2);
  m_menu.append(m_menuItem1);
  m_menu.append(m_menuItem2);

  // Add all elements to the horizontal box
  m_hbox.pack_start(m_button, false, false, 4);
  m_hbox.pack_end(m_textview, true, true, 4);

  // Add the menu and horizontal box to the verticial box
  m_vbox.pack_start(m_menu, false, false, 0);
  m_vbox.pack_start(m_hbox, false, false, 4);

  add(m_vbox);
  show_all_children();
}