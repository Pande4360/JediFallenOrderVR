#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintGeneratedClass.hpp"
namespace _Script_UMG {
struct WidgetTree;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct UserWidget;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct WidgetBlueprintGeneratedClass : public _Script_Engine::BlueprintGeneratedClass {
    private: char pad_2e8[0x70]; public:
    _Script_UMG::WidgetTree*& get_WidgetTree();
    bool get_bAllowTemplate();
    void set_bAllowTemplate(bool value);
    bool get_bAllowDynamicCreation();
    void set_bAllowDynamicCreation(bool value);
    bool get_bValidTemplate();
    void set_bValidTemplate(bool value);
    bool get_bTemplateInitialized();
    void set_bTemplateInitialized(bool value);
    bool get_bCookedTemplate();
    void set_bCookedTemplate(bool value);
    bool get_bClassRequiresNativeTick();
    void set_bClassRequiresNativeTick(bool value);
    void* get_Bindings();
    void* get_Animations();
    void* get_NamedSlots();
    void* get_TemplateAsset();
    _Script_UMG::UserWidget*& get_Template();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x358
#pragma pack(pop)
}
