#include "..\FUObjectArray.hpp"
#include "ClothingAssetCustomData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_CoreUObject::Class* _Script_ClothingSystemRuntime::ClothingAssetCustomData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ClothingSystemRuntime.ClothingAssetCustomData");
    return result;
}
