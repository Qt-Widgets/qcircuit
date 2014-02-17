/* 
 * File:   Console.cpp
 * Author: acailly
 * 
 * Created on 4 février 2014, 11:46
 */

#include "Console.h"

#include <iostream>
#include <QtCore/QVariant>

Console::Console()
{
    addInputPort("MESSAGE");
}

Console::~Console()
{
}

void Console::execute()
{    
    QString output = receive("MESSAGE").toString();
    
    if(!output.isEmpty())
    {
        std::cout << "Console: " << output.toStdString() << std::endl;
    }
}

