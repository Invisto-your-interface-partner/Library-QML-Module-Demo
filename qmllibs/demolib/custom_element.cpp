#include "custom_element.h"

CustomElement::CustomElement()
    : m_counter(0)
{

}

int CustomElement::counter() const
{
    return m_counter;
}

void CustomElement::setCounter(int value)
{
    if (value != m_counter)
    {
        m_counter = value;
        emit counterChanged();
    }
}
