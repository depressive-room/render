#include "text.hpp"

namespace Render{

Text::Text(const Parser::Tree::Text &parsText, QWidget* parent)
{
    std::string text = parsText.value;
    QString value = QString::fromStdString(text);
    QLabel *label = new QLabel(parent);
    label->setText(value);
}
}
