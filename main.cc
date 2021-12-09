#include <gtkmm/application.h>

#include "window.h"

int main(int argc, char* argv[])
{
  Glib::RefPtr<Gtk::Application>  app = Gtk::Application::create();

  MainWindow window;
  return app->run(window);
}