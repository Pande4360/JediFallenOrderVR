#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialExpressionCustomOutput.hpp"
#include "MaterialExpressionLandscapeGrassOutput.hpp"
void* _Script_Landscape::MaterialExpressionLandscapeGrassOutput::get_GrassTypes() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Landscape::MaterialExpressionLandscapeGrassOutput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.MaterialExpressionLandscapeGrassOutput");
    return result;
}
