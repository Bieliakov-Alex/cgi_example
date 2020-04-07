/*Copyright Alex Bieliakov 2020*/

#include <stdlib.h>

#include <iostream>
#include <string>

void set_content_type(std::string content_type) {
  std::cout << "Content-type: " << content_type << "\r\n\r\n";
}

void set_page_title(std::string page_title) {
  std::cout << "<title>" << page_title << "</title>\n";
}

void h1_text(std::string h1_text) { std::cout << h1_text << "\n"; }

int main(int argc, char *argv[]) {
  set_content_type("text/html");
  std::cout << "<!doctype html>\n";
  std::cout << "<html lang=\"en\">\n";
  std::cout << "<head>\n";
  set_page_title("Hello, world!");
  std::cout << "</head>\n";
  std::cout << "<body>\n";
  h1_text("Hello, world!");
  std::cout << "</body>\n";
  std::cout << "</html>\n";
  return 0;
}
