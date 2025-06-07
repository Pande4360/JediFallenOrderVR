#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "BrushBuilder.hpp"
void* _Script_Engine::BrushBuilder::get_BitmapFilename() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::BrushBuilder::get_Vertices() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::BrushBuilder::get_ToolTip() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::BrushBuilder::get_Polys() {
    return (void*)((uintptr_t)this + 0x60);
}
bool _Script_Engine::BrushBuilder::get_NotifyBadParams() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
bool _Script_Engine::BrushBuilder::get_MergeCoplanars() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
void _Script_Engine::BrushBuilder::set_NotifyBadParams(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::BrushBuilder::get_Layer() {
    return (void*)((uintptr_t)this + 0x70);
}
void _Script_Engine::BrushBuilder::set_MergeCoplanars(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::BrushBuilder::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.BrushBuilder");
    return result;
}
