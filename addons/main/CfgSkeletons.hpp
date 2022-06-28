class CfgSkeletons {
    class Default {
        isDiscrete = 1;
        skeletonInherit = "";
        skeletonBones[] = {};
    };
    class Head {
        isDiscrete = 0;
        skeletonInherit = "";
      skeletonBones[] =
      {
          "neck","",
            "neck1","neck",
            "head","neck1",
            "jaw","head",
            "chin","head",
            "jaw_rf","head",
            "jaw_rm","head",
            "jaw_rs","head",
            "jaw_lf","head",
            "jaw_lm","head",
            "jaw_ls","head",
            "ear_r","head",
            "ear_l","head",
            "lip_lc","head",
            "lip_lwlb","head",
            "lip_lwlf","head",
            "lip_lwm","head",
            "lip_lwrf","head",
            "lip_lwrb","head",
            "lip_rc","head",
            "lip_uprb","head",
            "lip_uprf","head",
            "lip_upm","head",
            "lip_uplf","head",
            "lip_uplb","head",
            "nose_tip","head",
            "nose_r","head",
            "nose_l","head",
            "zig_lt","head",
            "zig_lm","head",
            "zig_lb","head",
            "zig_rt","head",
            "zig_rm","head",
            "zig_rb","head",
            "cheek_r","head",
            "cheek_l","head",
            "eyebrow_lb","head",
            "eyebrow_lm","head",
            "eyebrow_lf","head",
            "corr","head",
            "eyebrow_rf","head",
            "eyebrow_rm","head",
            "eyebrow_rb","head",
            "eye_upr","head",
            "eye_lwr","head",
            "eye_upl","head",
            "eye_lwl","head",
            "cheek_rf","head",
            "cheek_rm","head",
            "cheek_rb","head",
            "cheek_lf","head",
            "cheek_lm","head",
            "cheek_lb","head",
            "forehead_l","head",
            "forehead_m","head",
            "forehead_r","head",
            "l_eye","head",
            "r_eye","head",
            "l_pupila","head",
            "r_pupila","head",
            "neck_t","head",
            "neck_b","head",
            "neck_r","head",
            "neck_l","head",
            "tongue_b","head",
            "tongue_m","head",
            "tongue_f","head"
        };
    };
    class OFP2_ManSkeleton {
        isDiscrete = 0;
        skeletonInherit = "";
        skeletonBones[] =
        {
            "Pelvis","",
            "Spine","Pelvis",
            "Spine1","Spine",
            "Spine2","Spine1",
            "Spine3","Spine2",
            "Camera","Pelvis",
            "weapon","Spine1",
            "launcher","Spine1",
            //Head skeleton in hierarchy
            "neck","Spine3",
            "neck1","neck",
            "head","neck1",
            "HeadCutScene","head",
            "jaw","head",
            "chin","head",
            "jaw_rf","head",
            "jaw_rm","head",
            "jaw_rs","head",
            "jaw_lf","head",
            "jaw_lm","head",
            "jaw_ls","head",
            "ear_r","head",
            "ear_l","head",
            "lip_lc","head",
            "lip_lwlb","head",
            "lip_lwlf","head",
            "lip_lwm","head",
            "lip_lwrf","head",
            "lip_lwrb","head",
            "lip_rc","head",
            "lip_uprb","head",
            "lip_uprf","head",
            "lip_upm","head",
            "lip_uplf","head",
            "lip_uplb","head",
            "nose_tip","head",
            "nose_r","head",
            "nose_l","head",
            "zig_lt","head",
            "zig_lm","head",
            "zig_lb","head",
            "zig_rt","head",
            "zig_rm","head",
            "zig_rb","head",
            "cheek_r","head",
            "cheek_l","head",
            "eyebrow_lb","head",
            "eyebrow_lm","head",
            "eyebrow_lf","head",
            "corr","head",
            "eyebrow_rf","head",
            "eyebrow_rm","head",
            "eyebrow_rb","head",
            "eye_upr","head",
            "eye_lwr","head",
            "eye_upl","head",
            "eye_lwl","head",
            "cheek_rf","head",
            "cheek_rm","head",
            "cheek_rb","head",
            "cheek_lf","head",
            "cheek_lm","head",
            "cheek_lb","head",
            "forehead_l","head",
            "forehead_m","head",
            "forehead_r","head",
            "l_eye","head",
            "r_eye","head",
            "l_pupila","head",
            "r_pupila","head",
            "neck_t","head",
            "neck_b","head",
            "neck_r","head",
            "neck_l","head",
            "tongue_b","head",
            "tongue_m","head",
            "tongue_f","head",
        //Left upper side
            "LeftShoulder","Spine3",
            "LeftArm","LeftShoulder",
            "LeftArmRoll","LeftArm",
            "LeftForeArm","LeftArmRoll",
            "LeftForeArmRoll","LeftForeArm",
            "LeftHand","LeftForeArmRoll",
            "LeftHandRing","LeftHand",
            "LeftHandRing1","LeftHandRing",
            "LeftHandRing2","LeftHandRing1",
            "LeftHandRing3","LeftHandRing2",
            "LeftHandPinky1","LeftHandRing",
            "LeftHandPinky2","LeftHandPinky1",
            "LeftHandPinky3","LeftHandPinky2",
            "LeftHandMiddle1","LeftHand",
            "LeftHandMiddle2","LeftHandMiddle1",
            "LeftHandMiddle3","LeftHandMiddle2",
            "LeftHandIndex1","LeftHand",
            "LeftHandIndex2","LeftHandIndex1",
            "LeftHandIndex3","LeftHandIndex2",
            "LeftHandThumb1","LeftHand",
            "LeftHandThumb2","LeftHandThumb1",
            "LeftHandThumb3","LeftHandThumb2",
        //Right upper side
            "RightShoulder","Spine3",
            "RightArm","RightShoulder",
            "RightArmRoll","RightArm",
            "RightForeArm","RightArmRoll",
            "RightForeArmRoll","RightForeArm",
            "RightHand","RightForeArmRoll",
            "RightHandRing","RightHand",
            "RightHandRing1","RightHandRing",
            "RightHandRing2","RightHandRing1",
            "RightHandRing3","RightHandRing2",
            "RightHandPinky1","RightHandRing",
            "RightHandPinky2","RightHandPinky1",
            "RightHandPinky3","RightHandPinky2",
            "RightHandMiddle1","RightHand",
            "RightHandMiddle2","RightHandMiddle1",
            "RightHandMiddle3","RightHandMiddle2",
            "RightHandIndex1","RightHand",
            "RightHandIndex2","RightHandIndex1",
            "RightHandIndex3","RightHandIndex2",
            "RightHandThumb1","RightHand",
            "RightHandThumb2","RightHandThumb1",
            "RightHandThumb3","RightHandThumb2",
        //Left lower side
            "LeftUpLeg","Pelvis",
            "LeftUpLegRoll","LeftUpLeg",
            "LeftLeg","LeftUpLegRoll",
            "LeftLegRoll","LeftLeg",
            "LeftFoot","LeftLegRoll",
            "LeftToeBase","LeftFoot",
        //Right lower side
            "RightUpLeg","Pelvis",
            "RightUpLegRoll","RightUpLeg",
            "RightLeg","RightUpLegRoll",
            "RightLegRoll","RightLeg",
            "RightFoot","RightLegRoll",
            "RightToeBase","RightFoot"
        };
    };
};