#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ListView.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct TreeView : public ListView {
    private: char pad_328[0x58]; public:
    void* get_BP_OnGetItemChildren();
    void* get_BP_OnItemExpansionChanged();
    static _Script_CoreUObject::Class* static_class();
    void SetItemExpansion(_Script_CoreUObject::Object* Item, bool bExpandItem);
    void ExpandAll();
    void CollapseAll();
}; // Size: 0x380
#pragma pack(pop)
}
