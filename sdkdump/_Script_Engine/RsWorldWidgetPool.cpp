#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsWorldWidgetPool.hpp"
void* _Script_Engine::RsWorldWidgetPool::get_WidgetCounts() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::RsWorldWidgetPool::get_ActiveWidgets() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::RsWorldWidgetPool::get_InActiveWidgets() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::RsWorldWidgetPool::get_InActiveWidgetClasses() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_Engine::RsWorldWidgetPool::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsWorldWidgetPool");
    return result;
}
