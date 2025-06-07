#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsTechRT\rsAnimInstance.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Game_Characters_Hero_Logic_AB_Hero {
struct AB_Hero_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Rig_Face_AB_hero_rig_face {
#pragma pack(push, 1)
struct AB_hero_rig_face_C : public _Script_RsTechRT::rsAnimInstance {
    private: char pad_7a0[0x3108]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_CopyPoseFromMesh_93D0BCB040CC76A29843DB9F2B6C13BC();
    void* get_AnimGraphNode_BlendListByBool_C3031199432E883D0E5E53BC8BE64B5E();
    void* get_AnimGraphNode_BlendListByBool_DF9E43C548C18CD1D6E3178B66B9EF75();
    void* get_RsLayeredBlendGraphNode_F6670AE54B6B2F7E286662ADBD6AD65F();
    void* get_AnimGraphNode_Slot_8E2688EB4B4C346A3EE45B973BDFADE6();
    void* get_AnimGraphNode_SequencePlayer_C73508BD4464610F99C10ABC6C1490C2();
    void* get_AnimGraphNode_SequencePlayer_C77AFDA84AE0AF45A9EA9D9CF6C95124();
    void* get_AnimGraphNode_StateResult_AC84CA2C4BDBA338BAFFE3A795EAC028();
    void* get_AnimGraphNode_StateMachine_CBC3106B48D381E7DBEC65829F3E0393();
    void* get_AnimGraphNode_BlendListByBool_5467156E410C25B03C28BF8EC360936C();
    void* get_AnimGraphNode_SequencePlayer_8963549840B7FE196119F78872886622();
    void* get_AnimGraphNode_StateResult_AD80A9824C0428C579CE429227181B04();
    void* get_AnimGraphNode_StateMachine_5A13CAAC457F6C7625E0D1A56DE665EC();
    void* get_AnimGraphNode_BlendListByBool_C3D2262E4763CC0279A3A18A5D1762F7();
    void* get_AnimGraphNode_BlendListByBool_C647C790407C277FEFF7B08E64211999();
    void* get_AnimGraphNode_SequencePlayer_7D91CCB54F165279C5E9A782D5225CD1();
    void* get_AnimGraphNode_SequencePlayer_56DFC0E447CE6A7BA01CC289D9FFAD66();
    void* get_AnimGraphNode_SequencePlayer_918F5BB84A20AEE56A3A1391E6B25C38();
    void* get_AnimGraphNode_BlendListByBool_59276E3E4C7B81DC18741E81D647C81E();
    void* get_AnimGraphNode_SequencePlayer_0600C31F40A5C47DD238D3A9CA64BA7E();
    void* get_AnimGraphNode_BlendListByBool_6AC3CE3442E66F8119ACDA8518FB8F16();
    void* get_AnimGraphNode_SequencePlayer_96D144F1406FED5E05E187B2B523DF3F();
    void* get_AnimGraphNode_BlendListByBool_28224EFB4682FADFF957E69A9881F625();
    void* get_AnimGraphNode_BlendListByBool_68DE48884DB4E0024207CA82298645B0();
    void* get_AnimGraphNode_SequencePlayer_BE38F51F4AEE8ED870BFAA8719FE9AA6();
    void* get_AnimGraphNode_BlendListByBool_341303D14E2899CD572DB4837928CD29();
    void* get_AnimGraphNode_SequencePlayer_667467884203B6920A10E3B1619BCA0A();
    void* get_AnimGraphNode_Root_7E3DF564470F9D8E69ABCEB1B2DF2184();
    void* get_AnimGraphNode_BlendListByBool_C7F5CD194BC186922BEFC285C7B87CA5();
    void* get_AnimGraphNode_SequencePlayer_4191CC6247BED0043EDBE6A880496C4A();
    void* get_AnimGraphNode_BlendListByBool_389035E84A0CC8893E2D249D7A4A511C();
    void* get_AnimGraphNode_SequencePlayer_55331CE442142EA3A38B8CA171905EAC();
    void* get_AnimGraphNode_SequencePlayer_360C0A9F49C7CDE6F41082B0AC4BDEDC();
    void* get_AnimGraphNode_BlendListByBool_D4041D3445233C7C8449F6934027FB74();
    void* get_AnimGraphNode_SequencePlayer_18FF01434F845439CC112AA1B410EC62();
    void* get_AnimGraphNode_Slot_D95029024F5675C056DC08A7F0CAEEAD();
    void* get_AnimGraphNode_TransitionResult_43E081DF498FB46C760B31ACB6453B3C();
    void* get_AnimGraphNode_TransitionResult_E95045C246C00F7206DB4EAF21F2A82E();
    void* get_AnimGraphNode_TransitionResult_1D06CD2A412E69D1A0AAE68A41CD5011();
    void* get_AnimGraphNode_TransitionResult_35A8A9424BB8286429F8BEAADDABF2B4();
    void* get_AnimGraphNode_TransitionResult_011C30CB4D523C68B4417EB61B80986D();
    void* get_AnimGraphNode_TransitionResult_95613CE046FC7B33A7CB698F58D62086();
    void* get_AnimGraphNode_TwoWayBlend_D970A1C4417D76DDA3CEA68782A35ECF();
    void* get_AnimGraphNode_BlendSpacePlayer_D65A24CE4346559898C215A5C852EC82();
    void* get_AnimGraphNode_BlendSpacePlayer_5CBC87C64C44E55C422DD68C9DE98323();
    void* get_AnimGraphNode_StateResult_3DA8A85B4BCD5622BFBD76A70AB0B948();
    void* get_AnimGraphNode_BlendSpacePlayer_8C9C0679433AF0FD26CBCFA67ECAD52C();
    void* get_AnimGraphNode_BlendListByBool_B733A7E54B18DFFEE0CA62A34DED3A2F();
    void* get_AnimGraphNode_SequencePlayer_7118F28F452F8CA5C9F77581D075F46A();
    void* get_AnimGraphNode_StateResult_F3D681F04A5402E7B2AC368F25C48E4E();
    void* get_AnimGraphNode_BlendSpacePlayer_197B850B42C5825B17B13288F3E09069();
    void* get_AnimGraphNode_StateResult_F950B0C94F45C083F548839BC0C8962E();
    void* get_AnimGraphNode_BlendSpacePlayer_5D09A55E49673CCC81BC7E9E90F3F52C();
    void* get_AnimGraphNode_TwoWayBlend_0F9A2E7A4174151B19F1ABB8EEF90EA1();
    void* get_AnimGraphNode_BlendListByBool_8856709B4567F724E71F32B6559CF4CC();
    void* get_AnimGraphNode_BlendSpacePlayer_6A0F021346AED5D24EF79AAC143018ED();
    void* get_AnimGraphNode_TwoWayBlend_2C3180A34692A711E8D26CAF4697322C();
    void* get_AnimGraphNode_BlendSpacePlayer_9AD5961F4B705533E3AE0B8210A57063();
    void* get_AnimGraphNode_TransitionResult_4233F65849C4CFD36B5A45ABA9FBC79A();
    void* get_AnimGraphNode_TransitionResult_A52B8C2D4AF7092CFFE73DA01C95018B();
    void* get_AnimGraphNode_SequencePlayer_C8A6FF604F270261543B7EAFDA2D0586();
    void* get_AnimGraphNode_StateResult_6259DE4242EEC0CA5B453DAA30305829();
    void* get_AnimGraphNode_SequencePlayer_EC400F42411FE2C12AD886B2F24634EF();
    void* get_AnimGraphNode_StateResult_C333628A484CEAC4659EEE9B5E3D7F42();
    void* get_AnimGraphNode_StateMachine_52DFF5B7429A9039755692AFB828771E();
    void* get_AnimGraphNode_StateResult_1752DC954ABC08936F6146A3366AC9DD();
    void* get_AnimGraphNode_StateMachine_39B7DD484334F68DE82185B0B23CDE89();
    void* get_AnimGraphNode_BlendListByBool_00992AD649EF71EA692D3DA3016126D1();
    void* get_AnimGraphNode_CopyPoseFromMesh_83EECF3144B21CE8CF472A96EEB65B71();
    void* get_AnimGraphNode_BlendListByBool_5833B03648D628C433D54D9B2A8DA2D8();
    void* get_AnimGraphNode_SequencePlayer_3BD8C79747A2FC4AA43F999981EC860B();
    _Script_Engine::SkeletalMeshComponent*& get_Mesh();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_HeroCharBP();
    bool get_CombatPose();
    void set_CombatPose(bool value);
    bool get_IsInCombat();
    void set_IsInCombat(bool value);
    bool get_IsAttacking();
    void set_IsAttacking(bool value);
    bool get_TakingReaction();
    void set_TakingReaction(bool value);
    bool get_TickFace();
    void set_TickFace(bool value);
    bool get_IsRunning();
    void set_IsRunning(bool value);
    bool get_IsLedgeHang();
    void set_IsLedgeHang(bool value);
    bool get_IsClimbing();
    void set_IsClimbing(bool value);
    bool get_IsJumping();
    void set_IsJumping(bool value);
    bool get_IsSwim();
    void set_IsSwim(bool value);
    bool get_IsDeath();
    void set_IsDeath(bool value);
    bool get_IsWallRun();
    void set_IsWallRun(bool value);
    bool get_IsWallJumpAscend();
    void set_IsWallJumpAscend(bool value);
    bool get_IsBalanceBeam();
    void set_IsBalanceBeam(bool value);
    void* get_HeroStateQueries();
    bool get_isDiving();
    void set_isDiving(bool value);
    _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C*& get_AB_HeroREF();
    float& get_ABHeroAMProgression();
    bool get_IsInCine();
    void set_IsInCine(bool value);
    bool get_ABHeroWindOn();
    void set_ABHeroWindOn(bool value);
    bool get_ABHeroIsInPivot();
    void set_ABHeroIsInPivot(bool value);
    float& get_WindInHair();
    float& get_WindAlphaForMovement();
    float& get_RunAlpha();
    bool get_IsUpsideDown();
    void set_IsUpsideDown(bool value);
    bool get_isForceSlowdownUnlocked();
    void set_isForceSlowdownUnlocked(bool value);
    bool get_HairMess();
    void set_HairMess(bool value);
    bool get_Is_in_Wind();
    void set_Is_in_Wind(bool value);
    static _Script_CoreUObject::Class* static_class();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_hero_rig_face_AnimGraphNode_TransitionResult_011C30CB4D523C68B4417EB61B80986D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_hero_rig_face_AnimGraphNode_TransitionResult_A52B8C2D4AF7092CFFE73DA01C95018B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_hero_rig_face_AnimGraphNode_TransitionResult_4233F65849C4CFD36B5A45ABA9FBC79A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_hero_rig_face_AnimGraphNode_TransitionResult_43E081DF498FB46C760B31ACB6453B3C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_hero_rig_face_AnimGraphNode_BlendSpacePlayer_6A0F021346AED5D24EF79AAC143018ED();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_hero_rig_face_AnimGraphNode_BlendListByBool_DF9E43C548C18CD1D6E3178B66B9EF75();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_hero_rig_face_AnimGraphNode_BlendSpacePlayer_197B850B42C5825B17B13288F3E09069();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_hero_rig_face_AnimGraphNode_BlendSpacePlayer_5CBC87C64C44E55C422DD68C9DE98323();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_hero_rig_face_AnimGraphNode_BlendSpacePlayer_8C9C0679433AF0FD26CBCFA67ECAD52C();
    void ExecuteUbergraph_AB_hero_rig_face(int32_t EntryPoint);
}; // Size: 0x38a8
#pragma pack(pop)
}
