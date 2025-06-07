#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackFloatMaterialParam.hpp"
#include "InterpTrackInst.hpp"
#include "InterpTrackInstFloatMaterialParam.hpp"
void* _Script_Engine::InterpTrackInstFloatMaterialParam::get_MaterialInstances() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::InterpTrackInstFloatMaterialParam::get_ResetFloats() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_Engine::InterpTrackFloatMaterialParam*& _Script_Engine::InterpTrackInstFloatMaterialParam::get_InstancedTrack() {
    return *(_Script_Engine::InterpTrackFloatMaterialParam**)((uintptr_t)this + 0x58);
}
void* _Script_Engine::InterpTrackInstFloatMaterialParam::get_PrimitiveMaterialRefs() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackInstFloatMaterialParam::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackInstFloatMaterialParam");
    return result;
}
