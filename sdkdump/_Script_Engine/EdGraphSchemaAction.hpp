#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct EdGraphSchemaAction {
    private: char pad_0[0x100]; public:
    void* get_MenuDescription();
    void* get_TooltipDescription();
    void* get_Category();
    void* get_Keywords();
    int32_t& get_Grouping();
    int32_t& get_SectionID();
    void* get_MenuDescriptionArray();
    void* get_FullSearchTitlesArray();
    void* get_FullSearchKeywordsArray();
    void* get_FullSearchCategoryArray();
    void* get_LocalizedMenuDescriptionArray();
    void* get_LocalizedFullSearchTitlesArray();
    void* get_LocalizedFullSearchKeywordsArray();
    void* get_LocalizedFullSearchCategoryArray();
    void* get_SearchText();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x100
#pragma pack(pop)
}
