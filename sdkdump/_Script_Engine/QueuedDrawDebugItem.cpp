#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "QueuedDrawDebugItem.hpp"
void* _Script_Engine::QueuedDrawDebugItem::get_ItemType() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::QueuedDrawDebugItem::get_Radius() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_Engine::QueuedDrawDebugItem::get_Thickness() {
    return *(float*)((uintptr_t)this + 0x4c);
}
void* _Script_Engine::QueuedDrawDebugItem::get_Center() {
    return (void*)((uintptr_t)this + 0x1c);
}
void* _Script_Engine::QueuedDrawDebugItem::get_StartLoc() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::QueuedDrawDebugItem::get_EndLoc() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::QueuedDrawDebugItem::get_Rotation() {
    return (void*)((uintptr_t)this + 0x28);
}
float& _Script_Engine::QueuedDrawDebugItem::get_Size() {
    return *(float*)((uintptr_t)this + 0x38);
}
int32_t& _Script_Engine::QueuedDrawDebugItem::get_Segments() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
void* _Script_Engine::QueuedDrawDebugItem::get_Color() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_Engine::QueuedDrawDebugItem::get_bPersistentLines() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
void _Script_Engine::QueuedDrawDebugItem::set_bPersistentLines(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::QueuedDrawDebugItem::get_LifeTime() {
    return *(float*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::QueuedDrawDebugItem::get_Message() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::QueuedDrawDebugItem::get_TextScale() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_Engine::QueuedDrawDebugItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.QueuedDrawDebugItem");
    return result;
}
