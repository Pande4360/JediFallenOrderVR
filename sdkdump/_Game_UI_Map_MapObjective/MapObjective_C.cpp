#include "..\FUObjectArray.hpp"
#include "MapObjective_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BillboardComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
void* _Game_UI_Map_MapObjective::MapObjective_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
bool _Game_UI_Map_MapObjective::MapObjective_C::get_Flash() {
    return (*(uint8_t*)((uintptr_t)this + 0x379 + 0)) & 1 != 0;
}
_Script_Engine::BoxComponent*& _Game_UI_Map_MapObjective::MapObjective_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x368);
}
_Script_Engine::BillboardComponent*& _Game_UI_Map_MapObjective::MapObjective_C::get_Billboard() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x370);
}
bool _Game_UI_Map_MapObjective::MapObjective_C::get_Enabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x378 + 0)) & 1 != 0;
}
void _Game_UI_Map_MapObjective::MapObjective_C::set_Flash(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x379 + 0);
    *(uint8_t*)((uintptr_t)this + 0x379 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_Map_MapObjective::MapObjective_C::set_Enabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x378 + 0);
    *(uint8_t*)((uintptr_t)this + 0x378 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_UI_Map_MapObjective::MapObjective_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/UI/Map/MapObjective.MapObjective_C");
    return result;
}
void _Game_UI_Map_MapObjective::MapObjective_C::UserConstructionScript0() {
    return;
}
void _Game_UI_Map_MapObjective::MapObjective_C::ReceiveBeginPlay0() {
    return;
}
void _Game_UI_Map_MapObjective::MapObjective_C::LVL_activate() {
    return;
}
void _Game_UI_Map_MapObjective::MapObjective_C::Added() {
    return;
}
void _Game_UI_Map_MapObjective::MapObjective_C::ReceiveActorBeginOverlap0(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_UI_Map_MapObjective::MapObjective_C::ExecuteUbergraph_MapObjective(int32_t EntryPoint) {
    return;
}
