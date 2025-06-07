#include "..\FUObjectArray.hpp"
#include "SynthSound.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundWaveProcedural.hpp"
_Script_CoreUObject::Class* _Script_AudioMixer::SynthSound::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioMixer.SynthSound");
    return result;
}
