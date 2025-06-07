#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ClothingAssetData_Legacy.hpp"
bool _Script_Engine::ClothingAssetData_Legacy::get_bClothPropertiesChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
void* _Script_Engine::ClothingAssetData_Legacy::get_ApexFileName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::ClothingAssetData_Legacy::get_AssetName() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_Engine::ClothingAssetData_Legacy::set_bClothPropertiesChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ClothingAssetData_Legacy::get_PhysicsProperties() {
    return (void*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_Engine::ClothingAssetData_Legacy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ClothingAssetData_Legacy");
    return result;
}
