#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Actor.hpp"
namespace _Script_Engine {
struct Model;
}
namespace _Script_Engine {
struct BrushComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Brush : public Actor {
    private: char pad_360[0x38]; public:
    void* get_BrushType();
    void* get_BrushColor();
    int32_t& get_PolyFlags();
    bool get_bColored();
    void set_bColored(bool value);
    bool get_bSolidWhenSelected();
    void set_bSolidWhenSelected(bool value);
    bool get_bPlaceableFromClassBrowser();
    void set_bPlaceableFromClassBrowser(bool value);
    bool get_bNotForClientOrServer();
    void set_bNotForClientOrServer(bool value);
    bool get_bShouldAlwaysDrawSolid();
    void set_bShouldAlwaysDrawSolid(bool value);
    _Script_Engine::Model*& get_Brush();
    _Script_Engine::BrushComponent*& get_BrushComponent();
    bool get_bInManipulation();
    void set_bInManipulation(bool value);
    void* get_SavedSelections();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x398
#pragma pack(pop)
}
