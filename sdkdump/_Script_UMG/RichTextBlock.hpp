#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "TextLayoutWidget.hpp"
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_UMG {
struct RichTextBlockDecorator;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct RichTextBlock : public TextLayoutWidget {
    private: char pad_128[0x250]; public:
    void* get_Text();
    _Script_Engine::DataTable*& get_TextStyleSet();
    void* get_DecoratorClasses();
    void* get_InstanceDecorators();
    static _Script_CoreUObject::Class* static_class();
    void SetText(void*& InText);
    _Script_UMG::RichTextBlockDecorator* GetDecoratorByClass(void* DecoratorClass);
}; // Size: 0x378
#pragma pack(pop)
}
