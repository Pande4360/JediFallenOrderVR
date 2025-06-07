#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Layer.hpp"
void* _Script_Engine::Layer::get_LayerName() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_Engine::Layer::get_bIsVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void* _Script_Engine::Layer::get_ActorStats() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_Engine::Layer::set_bIsVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::Layer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Layer");
    return result;
}
