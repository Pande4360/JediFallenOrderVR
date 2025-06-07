#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Foliage\FoliageType.hpp"
#include "RsFoliageAudioStatics.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsFoliageAudioStatics::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsFoliageAudioStatics");
    return result;
}
_Script_Foliage::FoliageType* _Script_RsGameTechRT::RsFoliageAudioStatics::FindPrimaryFoliageTypeAtLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Location, float Radius) {
    return;
}
