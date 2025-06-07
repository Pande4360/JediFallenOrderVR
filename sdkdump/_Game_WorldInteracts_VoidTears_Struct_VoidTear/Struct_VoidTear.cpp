#include "..\FUObjectArray.hpp"
#include "Struct_VoidTear.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\RsStreamingDefinition.hpp"
void* _Game_WorldInteracts_VoidTears_Struct_VoidTear::Struct_VoidTear::get_LocationDescription_10_B4E8C0A6426E7C36D3CA7A91DC2FBBE7() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_VoidTears_Struct_VoidTear::Struct_VoidTear::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/WorldInteracts/VoidTears/Struct_VoidTear.Struct_VoidTear");
    return result;
}
void* _Game_WorldInteracts_VoidTears_Struct_VoidTear::Struct_VoidTear::get_DisplayName_11_8357909348ECAD8AF075B2986A47287D() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_Engine::RsStreamingDefinition*& _Game_WorldInteracts_VoidTears_Struct_VoidTear::Struct_VoidTear::get_LevelStreamingDefinition_6_13E2EDE84581DFD7D8425D9A3B320EF9() {
    return *(_Script_Engine::RsStreamingDefinition**)((uintptr_t)this + 0x28);
}
