#include "..\FUObjectArray.hpp"
#include "AkAcousticTexture.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PhysicalMaterial.hpp"
_Script_CoreUObject::Class* _Script_AkAudio::AkAcousticTexture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkAcousticTexture");
    return result;
}
