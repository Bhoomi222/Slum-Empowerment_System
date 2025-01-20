#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include<vector>
#include <unordered_map>
using namespace std;

// Function declarations
void showMenu();
void login(const string& fileName, unordered_map<string, int>& failedAttempts);
void forgotPassword(const string& fileName);
void registerUser(const string& fileName);
void adminMenu(const string& fileName);
void resetPassword(const string& fileName, const string& userName);
bool isLocked(const string& name, const unordered_map<string, int>& failedAttempts);
void merge(vector<string>& arr, int left, int right);

// Functions for the modules
void education();
void health();
void houseAllotment();
void employment();

void accessScholarships();
void freeLearningResources();
void careerCounseling();
void nearbyEducationalInstitutions();
void nationalScholarshipPortal();
void ngoSupport();
void localSponsorshipPrograms();
void khanAcademyResources();
void ncertResources();
void codingPlatformsResources();
void careerGuidanceSessions();
void onlineCareerCounselors();
void helplineNumbers();
void governmentCareerPrograms();
void governmentSchools();
void skillDevelopmentCenters();
void eveningClassesForAdults();
void scholarshipSupportCenters();
void mathCourses();
void scienceCourses();
void programmingCourses();
void primarySchoolBooks();
void secondarySchoolBooks();
void seniorSecondarySchoolBooks();
void codeOrgResources();
void freeCodeCampResources();
void hackerRankResources();
void careerGuidanceWebsites();
void personalityAssessmentServices();
void careerPathSuggestions();
void careerCouselingHelplines();
void educationHelplines();
void pythonCourse();
void javascriptCourse();
void htmlCssCourse();
void backToProgrammingMenu();
void grade1Books();
void grade2Books();
void grade3Books();
void grade6Books();
void grade7Books();
void grade8Books();
void grade11Books();
void grade12Books();
void backToNcertResources();
void hourOfCode();
void codingLessons();
void backToCodingPlatforms();
void htmlCssLesson();
void javascriptLesson();
void pythonLesson();
void careerCounselingHelplines();
void skillDevelopmentHelplines();
void  governmentWelfareHelplines();
void  vocationalTraining();
void internshipsAndApprenticeships();
void skillDevelopmentPrograms();
void governmentEmploymentSchemes();
void enrollmentProcess();
void typesOfSchools();
void governmentScholarships();
void specialEducationPrograms();
void  tailoringSkills();
void  carpentrySkills();
void  computerSkills();
void  languageSkills();
void  applicationAssistance();
void    documentationGuidance();
void  interviewPreparation();
void  scholarshipInformation();

void freeHealthcareServices();
void governmentHospitals();
void mobileHealthUnits();
void ngoMedicalCamps();
void vaccinationPrograms();
void immunizationForChildren();
void covidVaccination();
void vaccinationAwarenessPrograms();
void vaccinationHelpline();
void hygieneAwareness();
void cleanlinessWorkshops();
void freeHygieneKits();
void diseasePrevention();
void mentalHealthSupport();
void freeCounselingSessions();
void mentalHealthHelpline();
void onlineResources();
void communitySupportGroups();
void nearbyHealthcareCenters();
void governmentClinics();
void privateHospitals();
void specializedCenters();
void ambulanceServices();
void emergencyAmbulance();
void nonEmergencyAmbulance();
void ambulanceHelpline();
void ambulanceBookingProcess();
void ambulanceAvailability();

void emergencyAmbulanceDetails();
void emergencyAmbulanceResponse();
void emergencyAmbulanceCost();

void nonEmergencyAmbulanceDetails();
void nonEmergencyAmbulanceBooking();
void nonEmergencyAmbulanceCost();

void ambulanceHelplineDetails();
void ambulanceHelplineCall();

void ambulanceBookingSteps();
void ambulanceBookingPayment();
void ambulanceBookingConfirmation();

void ambulanceAvailabilityCheck();
void ambulanceAvailabilityRegions();
void tuberculosisCenters();
void malariaCenters();
void hivTreatmentCenters();
void contactDistrictHealthOffice();

// Functions for Tuberculosis
void tuberculosisDetails();
void tuberculosisTreatment();
void tuberculosisPrevention();

// Functions for Malaria
void malariaDetails();
void malariaTreatment();
void malariaPrevention();

// Functions for HIV
void hivDetails();
void hivTreatment();
void hivPrevention();

void hospitalDetails();
void hospitalServices();
void ngoPartnerships();
void contactNGOs();

// Functions for hospital details
void hospitalAddress();
void hospitalTimings();
void hospitalSpecialties();

// Functions for hospital services
void outpatientServices();
void inpatientServices();
void emergencyServices();

// Functions for NGO partnerships
void ngoDetails();
void subsidizedTreatment();
void lowCostMedications();

void accidentCare();
void heartAttackCare();
void strokeCare();
void criticalCare();
void emergencyHelpline();

void surgeries();
void longTermTreatment();
void hospitalization();
void postSurgeryCare();
void specialCareUnits();
void consultationServices();
void diagnosticTests();
void minorTreatments();
void emergencyConsultations();
void followUpConsultations();

void cardiology();
void orthopedics();
void neurology();
void gastroenterology();
void dermatology();
void backToHospitalMenu();

void primaryCareServices();
void diagnosticTestCenters();
void immunizationPrograms();
void wellnessWorkshops();
void backToHealthcareMenu();
void immunizationForChildren();
void covidVaccination();
void vaccinationAwareness();
void vaccinationHelpline();
void childVaccinationDetails();
void adultVaccinationDetails();
void covidVaccineRegistration();
void covidVaccineSideEffects();
void vaccinationWorkshops();
void awarenessMaterial();
void civilHospitalDetails();
void healthCheckUpSchedule();
void ngoCampDetails();
void cleanlinessWorkshops();
void freeHygieneKits();
void diseasePrevention();
void handwashingWorkshops();
void sanitationWorkshops();
void wasteDisposalWorkshops();
void hygieneKitDistribution();
void waterborneDiseasePrevention();
void cleanlinessTips();
void mentalHealthHelpline();
void onlineResources();
void communitySupportGroups();
void crisisSupport();
void stressHelpline();
void yourDost();
void iCall();
void AASRA();
void groupTherapySessions();
void peerSupport();
void counselingSessions();

void applyForHousingScheme();
void pmayApplicationDetails();
void stateHousingApplicationDetails();
void checkEligibilityCriteria();
void pmayEligibility();
void stateHousingEligibility();
void trackApplicationStatus();
void pmayTrackStatus();
void stateHousingTrackStatus();
void accessFinancialAid();
void subsidizedLoans();
void ngoAssistance();
void governmentSubsidies();
void nearbyHousingProjects();
void governmentProjects();
void privateHousingProjects();
void relocationCamps();

void pmayEligibilityDetails();
void pmayApplicationProcess();
void pmayRequiredDocuments();

void stateHousingApplicationDetails();
void stateHousingSchemesOverview();
void stateHousingApplicationProcess();
void stateHousingRequiredDocuments();

void pmayEligibility();
void pmayIncomeLimit();
void pmayHousingStatus();
void pmayFamilyDetails();

void stateHousingEligibility();
void stateHousingCriteriaOverview();
void stateHousingSpecificCriteria();
void stateHousingLocalRegulations();

// Function declarations
void pmayTrackStatus();
void pmayOnlineTracking();
void pmayMunicipalOfficeTracking();

void stateHousingTrackStatus();
void stateHousingOnlineTracking();
void stateHousingPhoneTracking();
void stateHousingDocumentVerification();

// Function declarations
void subsidizedLoans();
void bankLoans();
void pmayLoans();

void affordableHousingByBuilders();
void realEstateAgentsForAffordableHousing();
void governmentPrivatePartnerships();

void ngoAssistance();
void habitatForHumanity();
void otherNGOs();

void governmentSubsidies();
void dbtSubsidy();
void municipalOfficeSubsidy();

void nearbyPMAYProjects();
void nearbyStateHousingProjects();
void privateAffordableHousing();
void relocationCamps();

void slumRedevelopmentCamps();
void temporaryHousingOptions();
void contactMunicipalAuthorities();

void incomeLimitDetails();
void housingStatusDetails();
void familyDetails();
void generalEligibilityDetails();

void mhadaOverview();
void ddaOverview();
void stateSpecificEligibility();
void stateHousingBoardContact();

void privateHousingProjectsOverview();
void contactPrivateBuilders();
void affordableHousingEligibility();

void privateHousingProjectsOverview();
void contactPrivateBuilders();
void affordableHousingEligibility();
void realEstateAgentsForAffordableHousing();
void governmentPrivatePartnerships();
// Function declarations
void pmayApplicationProcess();
void pmayRequiredDocuments();
void pmayEligibilityDetails();

void employment();
void jobOpportunities();
void nationalJobPortals();
void localJobFair();
void freelanceWork();
void skillDevelopmentPrograms1();
void pmkvyProgram();
void nsdcProgram();
void onlineLearningPlatforms();
void governmentSchemes();
void mgnregaScheme();
void pmegpScheme();
void amrutScheme();
void resumeBuildingSupport();
void freeResumeTemplates();
void resumeBuildingWorkshops();
void onlineResumeTools();
void nearbyEmploymentCenters();
void districtEmploymentOffices();
void privatePlacementAgencies();
void ngoBasedEmploymentServices();
void nationalJobPortals();
void localJobFair();
void freelanceWork();
void pmkvyProgram();
void nsdcProgram();
void onlineLearningPlatforms();
void mgnregaScheme();
void pmegpScheme();
void amrutScheme();
void freeResumeTemplates();
void resumeBuildingWorkshops();
void onlineResumeTools();
void districtEmploymentOffices();
void privatePlacementAgencies();
void ngoBasedEmploymentServices();
void ngoEmploymentOverview();
void popularNgoEmploymentServices();
void ngoRegistrationProcess();
void ngoEmploymentServices();
void visitJobPortals();
void applyForJobs();
void filterJobListings();
void learnMoreAboutPortals();
void findLocalJobFairs();
void registerForJobFairs();
void prepareForInterviews();
void learnMoreAboutJobFairs();
void exploreFreelanceWebsites();
void learnAboutFreelanceOpportunities();
void buildFreelancerProfile();
void getFreelanceWorkTips();
void learnAboutPMKVY();
void exploreTrainingSectors();
void findTrainingCenters();
void learnApplicationProcess();
void learnAboutNSDC();
void exploreCourses();
void learnAboutOnlinePlatforms();
void exploreFreeCourses();
void explorePaidCourses();
void exploreSpecificPlatforms();
void mgnregaOverview();
void mgnregaRegistration();
void mgnregaWorkTypes();
void mgnregaBenefits();
void mgnregaPaymentProcess();
void  pmegpOverview();
void  pmegpEligibility();
void pmegpFinancialAssistance();
void  pmegpApplicationProcess();
void  pmegpBenefits();
void amrutOverview();
void amrutJobOpportunities();
void amrutBenefits();
void amrutUrbanSectors();
void  amrutApplicationProcess();
void   freeResumeOverview();
void  freeResumeWebsites();
void freeResumeCustomization();
void freeResumeTips();
void resumeWorkshopOverview();
void resumeWorkshopOrganizations();
void  resumeWorkshopExpectations();
void  resumeWorkshopTips();
void resumeToolsOverview();
void popularResumeTools();
void  resumeToolsFeatures();
void  resumeToolsFeatures();
void  districtEmploymentOverview();
void districtEmploymentServices();
void  registerAtDistrictEmployment();
void  privatePlacementOverview();
void popularPlacementAgencies();
void  registerWithAgency();
void  resumeToolsTips();
void jobListingsAndCounseling();
void placementAgencyServices();
// Function declarations
void freeResumeOverview();
void freeResumeWebsites();
void freeResumeCustomization();
void freeResumeTips();
void displayTemplateBenefits();
void compareResumePlatforms();
void exploreFontOptions();
void emphasizeAchievements();
void amrutMissionFocus();
void amrutWaterSupply();
void amrutUrbanTransportation();
void amrutGreenSpaces();
void searchByState();
void searchByDistrict();
void searchBySector();
void contactLocalOfficers();
void searchByState();
void searchByDistrict();
void searchBySector();
void contactLocalOfficers();
// Function declarations
void districtEmploymentOverview();
void visitDistrictEmploymentOffice();
void accessJobListings();
void receiveCareerGuidance();
void accessTrainingOpportunities();
void visitDistrictEmploymentOffice();
void accessJobListings();
void learnMoreAboutJobOpportunities();
void inquireAboutJobAvailability();
void visitLocalJobProviders();
void searchForSpecificJobListings();
void explorePrivateSectorJobs();
void exploreGovernmentJobs();
void getJobSeekerAssistance();
void getInterviewPreparationHelp();
void registerForWorkshops();
void exploreJobRolesByIndustry();
void  findJobRolesBasedOnSkills();
void  inquireAboutFullTimeJobs();
void inquireAboutPartTimeJobs();
void inquireAboutInternships();
void end();

// Utility function to retrieve a password
string retrievePassword(const string& name, const string& fileName) {
    ifstream file(fileName);
    if (!file.is_open()) {
        cerr << "Error opening file!" << endl;
        return "";
    }

    string line, userName, userPassword;
    while (getline(file, line)) {
        stringstream ss(line);
        getline(ss, userName, ',');
        getline(ss, userPassword, ',');

        if (userName == name) {
            file.close();
            return userPassword;
        }
    }

    file.close();
    return "";
}

// Utility function to check if an account is locked
bool isLocked(const string& name, const unordered_map<string, int>& failedAttempts) {
    return failedAttempts.count(name) && failedAttempts.at(name) >= 3;
}

// Function to log in
void login(const string& fileName, unordered_map<string, int>& failedAttempts) {
    string name, password;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);

    if (isLocked(name, failedAttempts)) {
        cout << "Account locked due to multiple failed login attempts. Contact admin." << endl;
        return;
    }

    cout << "Enter Password: ";
    getline(cin, password);

    if (retrievePassword(name, fileName) == password) {
        cout << "Logged in successfully!" << endl;
        failedAttempts[name] = 0; // Reset failed attempts

        // Post-login menu
        int choice;
        do {
            cout << "\n===== MODULE MENU =====\n";
            cout << "1. Education\n";
            cout << "2. Health\n";
            cout << "3. House Allotment\n";
            cout << "4. Employment\n";
            cout << "5. Exit the System\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    education();
                    break;
                case 2:
                    health();
                    break;
                case 3:
                    houseAllotment();
                    break;
                case 4:
                    employment();
                    break;
                case 5:
                    cout << "Exiting the system... Goodbye!" << endl;
                    break;
                default:
                    cout << "Invalid choice! Please try again." << endl;
            }
        } while (choice != 5);

    } else {
        cout << "Invalid credentials!" << endl;
        failedAttempts[name]++;
        if (failedAttempts[name] >= 3) {
            cout << "Account locked due to 3 failed login attempts!" << endl;
        }
    }
}

// Modules Implementation

void education() {
    int choice;
    do {
        cout << "\n=== Education Module ===" << endl;
        cout << "1. Access Scholarships\n";
        cout << "2. Free Learning Resources\n";
        cout << "3. Career Counseling\n";
        cout << "4. Nearby Educational Institutions\n";
        cout << "5. Back to Main Menu\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                accessScholarships();
                break;
            case 2:
                freeLearningResources();
                break;
            case 3:
                careerCounseling();
                break;
            case 4:
                nearbyEducationalInstitutions();
                break;
            case 5:
                cout << "Returning to the main menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);
}

// Merge Sort function to sort the scholarship types
void merge(vector<string>& scholarships, int left, int mid, int right) {
    int n1 = mid - left + 1; // Size of the left subarray
    int n2 = right - mid;    // Size of the right subarray

    // Create temporary arrays for left and right subarrays
    vector<string> leftArray(n1);
    vector<string> rightArray(n2);

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++) {
        leftArray[i] = scholarships[left + i];
    }
    for (int j = 0; j < n2; j++) {
        rightArray[j] = scholarships[mid + 1 + j];
    }

    // Merge the temporary arrays back into the original array
    int i = 0;    // Initial index of left subarray
    int j = 0;    // Initial index of right subarray
    int k = left; // Initial index of merged subarray

    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            scholarships[k] = leftArray[i];
            i++;
        } else {
            scholarships[k] = rightArray[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of leftArray, if any
    while (i < n1) {
        scholarships[k] = leftArray[i];
        i++;
        k++;
    }

    // Copy remaining elements of rightArray, if any
    while (j < n2) {
        scholarships[k] = rightArray[j];
        j++;
        k++;
    }
}

// Merge Sort function to sort the entire scholarship list
void mergeSort(vector<string>& scholarships, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; // Find the middle point

        // Recursively sort the two halves
        mergeSort(scholarships, left, mid);
        mergeSort(scholarships, mid + 1, right);

        // Merge the two sorted halves
        merge(scholarships, left, mid, right);
    }
}

// Binary Search function to find a specific scholarship type
int binarysearch(const vector<string>& scholarships, const string& searchTerm) {
    int left = 0;
    int right = scholarships.size() - 1;

    // Loop while there are elements to search
    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate the middle index

        cout << "Searching... Checking index " << mid << ": " << scholarships[mid] << endl;

        // If the middle element is the search term, return its index
        if (scholarships[mid] == searchTerm) {
            cout << "Found the scholarship at index " << mid << ": " << scholarships[mid] << endl;
            return mid;
        }

        // If the search term is smaller than the middle element, search in the left half
        if (scholarships[mid] > searchTerm) {
            cout << "The term is smaller than " << scholarships[mid] << ". Searching left half.\n";
            right = mid - 1;
        }
        // Otherwise, search in the right half
        else {
            cout << "The term is larger than " << scholarships[mid] << ". Searching right half.\n";
            left = mid + 1;
        }
    }

    cout << "Scholarship not found.\n";
    return -1; // Scholarship not found
}

void accessScholarships() {
    int choice;
    cout << "\n--- Scholarships ---" << endl;
    cout << "1. National Scholarship Portal\n";
    cout << "2. NGO Support\n";
    cout << "3. Local Sponsorship Programs\n";
    cout << "4. Search for Scholarships\n";
    cout << "5. Back\n";
    cout<<"=========================================="<<endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            // Here you can implement the nationalScholarshipPortal function
            cout << "Redirecting to National Scholarship Portal...\n";
            break;
        case 2:
            // Here you can implement the ngoSupport function
            cout << "Redirecting to NGO Support...\n";
            break;
        case 3:
            // Here you can implement the localSponsorshipPrograms function
            cout << "Redirecting to Local Sponsorship Programs...\n";
            break;
        case 4:
            {
                // Predefined list of scholarships
                vector<string> scholarships = {
                    "National Merit Scholarship", "NGO Financial Aid", "Local Community Grant",
                    "STEM Scholarship", "Global Student Aid", "Healthcare Support Scholarship"
                };

                // Sort the scholarship list using Merge Sort
                mergeSort(scholarships, 0, scholarships.size() - 1);

                // Display the sorted list of scholarships
                cout << "\nAvailable Scholarships (sorted):\n";
                for (const string& scholarship : scholarships) {
                    cout << "- " << scholarship << endl;
                }

                // Search for a specific scholarship using binary search
                cout << "\nEnter the scholarship name you're looking for: ";
                string searchTerm;
                cin.ignore(); // To clear the input buffer
                getline(cin, searchTerm); // Read the full scholarship name

                // Perform binary search to find the scholarship
                int index = binarysearch(scholarships, searchTerm);

                if (index != -1) {
                    cout << "Scholarship found: " << scholarships[index] << endl;
                }
            }
            break;
        case 5:
            cout << "Returning to the Education Module...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void nationalScholarshipPortal() {
    int choice;
    do {
        cout << "\nNational Scholarship Portal: Choose the scholarship you want to learn more about.\n";
        cout << "1. Pre-Matric Scholarships\n";
        cout << "2. Post-Matric Scholarships\n";
        cout << "3. Merit-cum-Means Scholarships\n";
        cout << "4. Back\n";
       cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1: {
                int subChoice;
                cout << "\nPre-Matric Scholarships: Scholarships for students in classes 1 to 10.\n";
                cout << "1. Eligibility Criteria\n";
                cout << "2. Documents Required\n";
                cout << "3. Application Process\n";
                cout << "4. Back\n";
                cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

                switch (subChoice) {
                    case 1:
                        cout << "Eligibility Criteria: Must be a student in classes 1 to 10, from economically weaker sections.\n";
                        break;
                    case 2:
                        cout << "Documents Required: Income certificate, school ID, proof of admission.\n";
                        break;
                    case 3:
                        cout << "Application Process: Apply online through the National Scholarship Portal (NSP) website.\n";
                        cout << "Website: www.scholarships.gov.in\n";
                        break;
                    case 4:
                        cout << "Returning to the National Scholarship Portal...\n";
                        break;
                    default:
                        cout << "Invalid choice! Please try again.\n";
                }
                break;
            }
            case 2: {
                int subChoice;
                cout << "\nPost-Matric Scholarships: Scholarships for students in classes 11, 12, and higher education.\n";
                cout << "1. Eligibility Criteria\n";
                cout << "2. Documents Required\n";
                cout << "3. Application Process\n";
                cout << "4. Back\n";
                 cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

                switch (subChoice) {
                    case 1:
                        cout << "Eligibility Criteria: Must be a student in class 11, 12, or pursuing higher education, from economically weaker sections.\n";
                        break;
                    case 2:
                        cout << "Documents Required: Income certificate, proof of admission in a recognized institution, academic records.\n";
                        break;
                    case 3:
                        cout << "Application Process: Apply online through the National Scholarship Portal (NSP) website.\n";
                        cout << "Website: www.scholarships.gov.in\n";
                        break;
                    case 4:
                        cout << "Returning to the National Scholarship Portal...\n";
                        break;
                    default:
                        cout << "Invalid choice! Please try again.\n";
                }
                break;
            }
            case 3: {
                int subChoice;
                cout << "\nMerit-cum-Means Scholarships: Scholarships for students based on merit and financial need.\n";
                cout << "1. Eligibility Criteria\n";
                cout << "2. Documents Required\n";
                cout << "3. Application Process\n";
                cout << "4. Back\n";
                cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

                switch (subChoice) {
                    case 1:
                        cout << "Eligibility Criteria: Must have excellent academic records and come from economically weaker sections.\n";
                        break;
                    case 2:
                        cout << "Documents Required: Income certificate, academic records, and proof of financial need.\n";
                        break;
                    case 3:
                        cout << "Application Process: Apply online through the National Scholarship Portal (NSP) website.\n";
                        cout << "Website: www.scholarships.gov.in\n";
                        break;
                    case 4:
                        cout << "Returning to the National Scholarship Portal...\n";
                        break;
                    default:
                        cout << "Invalid choice! Please try again.\n";
                }
                break;
            }
            case 4:
                cout << "Returning to the previous menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);  // Loop until '4' (Back) is selected
}


void ngoSupport() {
    int choice;
    do {
        cout << "\nNGO Support: Choose the NGO you would like to learn more about.\n";
        cout << "1. Akshaya Patra\n";
        cout << "2. Smile Foundation\n";
        cout << "3. Teach For India\n";
        cout << "4. Back\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1: {
                int subChoice;
                cout << "\nAkshaya Patra: An NGO providing free mid-day meals to children in schools.\n";
                cout << "1. Education Support Program\n";
                cout << "2. Mid-Day Meal Scheme\n";
                cout << "3. Back\n";
               cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

                switch (subChoice) {
                    case 1:
                        cout << "Education Support Program: Provides financial aid and scholarships for students.\n";
                        cout << "Contact Akshaya Patra for details on their education programs and eligibility.\n";
                        break;
                    case 2:
                        cout << "Mid-Day Meal Scheme: Offers free nutritious meals to school children to promote attendance.\n";
                        cout << "Contact your local Akshaya Patra office for details on the nearest school participation.\n";
                        break;
                    case 3:
                        cout << "Returning to NGO Support...\n";
                        break;
                    default:
                        cout << "Invalid choice! Please try again.\n";
                }
                break;
            }
            case 2: {
                int subChoice;
                cout << "\nSmile Foundation: Provides education and healthcare programs for underprivileged communities.\n";
                cout << "1. Education Sponsorship\n";
                cout << "2. Health and Nutrition Programs\n";
                cout << "3. Back\n";
                cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

                switch (subChoice) {
                    case 1:
                        cout << "Education Sponsorship: Smile Foundation supports children with school fees, uniforms, and books.\n";
                        cout << "Contact Smile Foundation for more details on the available sponsorship programs.\n";
                        break;
                    case 2:
                        cout << "Health and Nutrition Programs: Provides healthcare services and nutritional support for children.\n";
                        cout << "Inquire with Smile Foundation for details on their health-related programs.\n";
                        break;
                    case 3:
                        cout << "Returning to NGO Support...\n";
                        break;
                    default:
                        cout << "Invalid choice! Please try again.\n";
                }
                break;
            }
            case 3: {
                int subChoice;
                cout << "\nTeach For India: An initiative to provide quality education for underprivileged children.\n";
                cout << "1. Fellowship Program\n";
                cout << "2. Education Outreach Programs\n";
                cout << "3. Back\n";
                cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

                switch (subChoice) {
                    case 1:
                        cout << "Fellowship Program: A two-year program where you teach in underserved communities.\n";
                        cout << "Visit the Teach For India website for details on applying for the fellowship.\n";
                        break;
                    case 2:
                        cout << "Education Outreach Programs: Works with schools to improve learning outcomes for students.\n";
                        cout << "Inquire with Teach For India for details on how to get involved in outreach initiatives.\n";
                        break;
                    case 3:
                        cout << "Returning to NGO Support...\n";
                        break;
                    default:
                        cout << "Invalid choice! Please try again.\n";
                }
                break;
            }
            case 4:
                cout << "Returning to the previous menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);  // Loop until '4' (Back) is selected
}


void localSponsorshipPrograms() {
    int choice;
    do {
        cout << "\nLocal Sponsorship Programs: Choose the type of sponsorship program you're interested in.\n";
        cout << "1. Municipal Government Sponsorship\n";
        cout << "2. Local NGO Sponsorship\n";
        cout << "3. Corporate Sponsorship Programs\n";
        cout << "4. Back\n";
        cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1: {
                int subChoice;
                cout << "\nMunicipal Government Sponsorship: These programs provide financial assistance for education and skill development.\n";
                cout << "1. Education Grants\n";
                cout << "2. Skill Development Sponsorship\n";
                cout << "3. Back\n";
                cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

                switch (subChoice) {
                    case 1:
                        cout << "Education Grants: Offered by the local municipal government to support the education of underprivileged students.\n";
                        cout << "Contact your municipal office for more details on application procedures.\n";
                        break;
                    case 2:
                        cout << "Skill Development Sponsorship: Financial aid for vocational training and skill development programs.\n";
                        cout << "Inquire with your local government office for available programs.\n";
                        break;
                    case 3:
                        cout << "Returning to Local Sponsorship Programs...\n";
                        break;
                    default:
                        cout << "Invalid choice! Please try again.\n";
                }
                break;
            }
            case 2: {
                int subChoice;
                cout << "\nLocal NGO Sponsorship: Many NGOs offer sponsorships to support education and skills development.\n";
                cout << "1. Pratham Foundation\n";
                cout << "2. Smile Foundation\n";
                cout << "3. Back\n";
                cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

                switch (subChoice) {
                    case 1:
                        cout << "Pratham Foundation: Provides financial sponsorship for education, skill development, and healthcare.\n";
                        cout << "Contact Pratham offices for more information on available programs.\n";
                        break;
                    case 2:
                        cout << "Smile Foundation: Offers education sponsorship and skill development programs for disadvantaged communities.\n";
                        cout << "Contact Smile Foundation for further details on sponsorship programs.\n";
                        break;
                    case 3:
                        cout << "Returning to Local Sponsorship Programs...\n";
                        break;
                    default:
                        cout << "Invalid choice! Please try again.\n";
                }
                break;
            }
            case 3: {
                int subChoice;
                cout << "\nCorporate Sponsorship Programs: Some corporations provide financial sponsorship for education and skill training.\n";
                cout << "1. Tata Group Scholarships\n";
                cout << "2. Infosys Foundation Sponsorship\n";
                cout << "3. Back\n";
                cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

                switch (subChoice) {
                    case 1:
                        cout << "Tata Group Scholarships: Provides educational sponsorship for students in need, with a focus on higher education.\n";
                        cout << "Visit Tata Group's website for more details on available scholarships and how to apply.\n";
                        break;
                    case 2:
                        cout << "Infosys Foundation Sponsorship: Offers financial aid for students pursuing education and skill development.\n";
                        cout << "Contact Infosys Foundation for details on their current sponsorship programs.\n";
                        break;
                    case 3:
                        cout << "Returning to Local Sponsorship Programs...\n";
                        break;
                    default:
                        cout << "Invalid choice! Please try again.\n";
                }
                break;
            }
            case 4:
                cout << "Returning to the previous menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);  // Loop until '4' (Back) is selected
}


void freeLearningResources() {
    int choice;
    cout << "\n--- Free Learning Resources ---" << endl;
    cout << "1. Khan Academy\n";
    cout << "2. NCERT PDFs\n";
    cout << "3. Coding Platforms\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            khanAcademyResources();
            break;
        case 2:
            ncertResources();
            break;
        case 3:
            codingPlatformsResources();
            break;
        case 4:
            cout << "Returning to the Education Module...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void khanAcademyResources() {
    int choice;
    cout << "\nKhan Academy Resources: Access free online learning materials.\n";
    cout << "1. Math Courses\n";
    cout << "2. Science Courses\n";
    cout << "3. Programming Courses\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            mathCourses();
            break;
        case 2:
            scienceCourses();
            break;
        case 3:
            programmingCourses();
            break;
        case 4:
            cout << "Returning to Free Learning Resources...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void selectionSort(vector<string>& courses) {
    int n = courses.size();
    for (int i = 0; i < n - 1; i++) {
        // Find the minimum element in unsorted part of the array
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (courses[j] < courses[minIndex]) {
                minIndex = j; // Update the index of the minimum element
            }
        }
        // Swap the found minimum element with the first element
        swap(courses[i], courses[minIndex]);
    }
}

// Linear Search function to search for a specific course
int linearsearch(const vector<string>& courses, const string& searchTerm) {
    for (int i = 0; i < courses.size(); i++) {
        if (courses[i] == searchTerm) {
            return i; // Return the index if the course is found
        }
    }
    return -1; // Return -1 if the course is not found
}

void mathCourses() {
    int choice;
    cout << "\nMath Courses: Choose a math course.\n";
    cout << "1. Algebra\n";
    cout << "2. Geometry\n";
    cout << "3. Calculus\n";
    cout << "4. Search for Courses\n";
    cout << "5. Back\n";
    cout<<"=========================================="<<endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Algebra: Free lessons on linear equations, polynomials, and more.\n";
            break;
        case 2:
            cout << "Geometry: Free lessons on shapes, areas, volumes, and more.\n";
            break;
        case 3:
            cout << "Calculus: Free lessons on limits, derivatives, and integrals.\n";
            break;
        case 4:
            {
                // Predefined list of math courses
                vector<string> courses = {
                    "Algebra", "Geometry", "Calculus", "Statistics", "Trigonometry"
                };

                // Sort the courses list using Selection Sort
                selectionSort(courses);

                // Display the sorted list of courses
                cout << "\nAvailable Math Courses (sorted):\n";
                for (const string& course : courses) {
                    cout << "- " << course << endl;
                }

                // Search for a specific course using Linear Search
                cout << "\nEnter the course name you're looking for: ";
                string searchTerm;
                cin.ignore(); // To clear the input buffer
                getline(cin, searchTerm); // Read the full course name

                // Perform linear search to find the course
                int index = linearsearch(courses, searchTerm);

                if (index != -1) {
                    cout << "Course found at index " << index << ": " << courses[index] << endl;
                } else {
                    cout << "Course not found.\n";
                }
            }
            break;
        case 5:
            cout << "Returning to Khan Academy Resources...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void scienceCourses() {
    int choice;
    cout << "\nScience Courses: Choose a science course.\n";
    cout << "1. Physics\n";
    cout << "2. Chemistry\n";
    cout << "3. Biology\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Physics: Free lessons on mechanics, electricity, and more.\n";
            break;
        case 2:
            cout << "Chemistry: Free lessons on atoms, molecules, and more.\n";
            break;
        case 3:
            cout << "Biology: Free lessons on cells, genetics, and more.\n";
            break;
        case 4:
            cout << "Returning to Khan Academy Resources...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void programmingCourses() {
    int choice;
    do {
        cout << "\nProgramming Courses: Choose a programming course.\n";
        cout << "1. Python\n";
        cout << "2. JavaScript\n";
        cout << "3. HTML/CSS\n";
        cout << "4. Back\n";
        cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                pythonCourse();
                break;
            case 2:
                javascriptCourse();
                break;
            case 3:
                htmlCssCourse();
                break;
            case 4:
                backToProgrammingMenu();
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);
}

// Python course details with nested switch
void pythonCourse() {
    int subChoice;
    do {
        cout << "\n--- Python Course ---\n";
        cout << "1. Learn Python Basics\n";
        cout << "2. Advanced Python Concepts\n";
        cout << "3. Python Projects\n";
        cout << "4. Back\n";
        cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

        switch (subChoice) {
            case 1:
                cout << "Python Basics: Learn data types, loops, functions, and more.\n";
                break;
            case 2:
                cout << "Advanced Python: Explore object-oriented programming (OOP), decorators, and libraries like NumPy.\n";
                break;
            case 3:
                cout << "Python Projects: Work on building Python projects such as web scraping, automation, and data analysis.\n";
                break;
            case 4:
                cout << "Returning to Programming Courses...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (subChoice != 4);
}

// JavaScript course details with nested switch
void javascriptCourse() {
    int subChoice;
    do {
        cout << "\n--- JavaScript Course ---\n";
        cout << "1. Learn JavaScript Basics\n";
        cout << "2. Web Development with JavaScript\n";
        cout << "3. Advanced JavaScript Concepts\n";
        cout << "4. Back\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

        switch (subChoice) {
            case 1:
                cout << "JavaScript Basics: Learn variables, functions, loops, and events.\n";
                break;
            case 2:
                cout << "Web Development with JavaScript: Learn DOM manipulation, form validation, and interactive websites.\n";
                break;
            case 3:
                cout << "Advanced JavaScript: Learn ES6 features, asynchronous JavaScript, and frameworks like React.\n";
                break;
            case 4:
                cout << "Returning to Programming Courses...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (subChoice != 4);
}

// HTML/CSS course details with nested switch
void htmlCssCourse() {
    int subChoice;
    do {
        cout << "\n--- HTML/CSS Course ---\n";
        cout << "1. Learn HTML Basics\n";
        cout << "2. Learn CSS Styling\n";
        cout << "3. Build Web Pages with HTML & CSS\n";
        cout << "4. Back\n";
        cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

        switch (subChoice) {
            case 1:
                cout << "HTML Basics: Learn to create webpage structure using elements, tags, and attributes.\n";
                break;
            case 2:
                cout << "CSS Styling: Learn how to style web pages using colors, fonts, layouts, and responsive design.\n";
                break;
            case 3:
                cout << "Web Pages with HTML & CSS: Create and design your own webpage with real-world examples.\n";
                break;
            case 4:
                cout << "Returning to Programming Courses...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (subChoice != 4);
}

// Back function for going to the previous menu
void backToProgrammingMenu() {
    cout << "Returning to the main menu...\n";
}

void ncertResources() {
    int choice;
    cout << "\nNCERT Resources: Download free school textbooks for grades 1-12.\n";
    cout << "1. Primary School Books\n";
    cout << "2. Secondary School Books\n";
    cout << "3. Senior Secondary School Books\n";
    cout << "4. Back\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            primarySchoolBooks();
            break;
        case 2:
            secondarySchoolBooks();
            break;
        case 3:
            seniorSecondarySchoolBooks();
            break;
        case 4:
            cout << "Returning to Free Learning Resources...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void primarySchoolBooks() {
    int choice;
    do {
        cout << "\nPrimary School Books: Choose a grade.\n";
        cout << "1. Grade 1\n";
        cout << "2. Grade 2\n";
        cout << "3. Grade 3\n";
        cout << "4. Back\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                grade1Books();
                break;
            case 2:
                grade2Books();
                break;
            case 3:
                grade3Books();
                break;
            case 4:
                backToNcertResources();
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);
}

// Grade 1 books details with nested switch
void grade1Books() {
    int subChoice;
    do {
        cout << "\n--- Grade 1 Books ---\n";
        cout << "1. Math\n";
        cout << "2. English\n";
        cout << "3. Science\n";
        cout << "4. Back\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

        switch (subChoice) {
            case 1:
                cout << "Grade 1 Math: Download textbooks for addition, subtraction, and basic geometry.\n";
                break;
            case 2:
                cout << "Grade 1 English: Download textbooks for vocabulary, grammar, and basic reading.\n";
                break;
            case 3:
                cout << "Grade 1 Science: Download textbooks for plants, animals, and basic earth science.\n";
                break;
            case 4:
                cout << "Returning to Primary School Books...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (subChoice != 4);
}

// Grade 2 books details with nested switch
void grade2Books() {
    int subChoice;
    do {
        cout << "\n--- Grade 2 Books ---\n";
        cout << "1. Math\n";
        cout << "2. Science\n";
        cout << "3. English\n";
        cout << "4. Back\n";
        cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

        switch (subChoice) {
            case 1:
                cout << "Grade 2 Math: Download textbooks for multiplication, division, and basic fractions.\n";
                break;
            case 2:
                cout << "Grade 2 Science: Download textbooks for living organisms, weather, and the environment.\n";
                break;
            case 3:
                cout << "Grade 2 English: Download textbooks for sentence formation, reading comprehension, and vocabulary.\n";
                break;
            case 4:
                cout << "Returning to Primary School Books...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (subChoice != 4);
}

// Grade 3 books details with nested switch
void grade3Books() {
    int subChoice;
    do {
        cout << "\n--- Grade 3 Books ---\n";
        cout << "1. Math\n";
        cout << "2. Social Studies\n";
        cout << "3. Science\n";
        cout << "4. Back\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

        switch (subChoice) {
            case 1:
                cout << "Grade 3 Math: Download textbooks for multiplication, division, and measurements.\n";
                break;
            case 2:
                cout << "Grade 3 Social Studies: Download textbooks for history, geography, and culture.\n";
                break;
            case 3:
                cout << "Grade 3 Science: Download textbooks for forces, motion, and basic physics.\n";
                break;
            case 4:
                cout << "Returning to Primary School Books...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (subChoice != 4);
}

// Back function to return to the previous menu

void secondarySchoolBooks() {
    int choice;
    do {
        cout << "\nSecondary School Books: Choose a grade.\n";
        cout << "1. Grade 6\n";
        cout << "2. Grade 7\n";
        cout << "3. Grade 8\n";
        cout << "4. Back\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                grade6Books();
                break;
            case 2:
                grade7Books();
                break;
            case 3:
                grade8Books();
                break;
            case 4:
                backToNcertResources();
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);
}

// Grade 6 books details with nested switch
void grade6Books() {
    int subChoice;
    do {
        cout << "\n--- Grade 6 Books ---\n";
        cout << "1. Math\n";
        cout << "2. Science\n";
        cout << "3. Social Studies\n";
        cout << "4. English\n";
        cout << "5. Back\n";
        cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

        switch (subChoice) {
            case 1:
                cout << "Grade 6 Math: Download textbooks for basic algebra, geometry, and arithmetic.\n";
                break;
            case 2:
                cout << "Grade 6 Science: Download textbooks for physics, chemistry, and biology basics.\n";
                break;
            case 3:
                cout << "Grade 6 Social Studies: Download textbooks for geography, history, and civics.\n";
                break;
            case 4:
                cout << "Grade 6 English: Download textbooks for grammar, writing, and reading comprehension.\n";
                break;
            case 5:
                cout << "Returning to Secondary School Books...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (subChoice != 5);
}

// Grade 7 books details with nested switch
void grade7Books() {
    int subChoice;
    do {
        cout << "\n--- Grade 7 Books ---\n";
        cout << "1. Math\n";
        cout << "2. Science\n";
        cout << "3. Social Studies\n";
        cout << "4. English\n";
        cout << "5. Back\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

        switch (subChoice) {
            case 1:
                cout << "Grade 7 Math: Download textbooks for algebra, ratios, and percentages.\n";
                break;
            case 2:
                cout << "Grade 7 Science: Download textbooks for human anatomy, energy, and ecology.\n";
                break;
            case 3:
                cout << "Grade 7 Social Studies: Download textbooks for world geography, history, and civics.\n";
                break;
            case 4:
                cout << "Grade 7 English: Download textbooks for grammar, writing essays, and reading comprehension.\n";
                break;
            case 5:
                cout << "Returning to Secondary School Books...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (subChoice != 5);
}

// Grade 8 books details with nested switch
void grade8Books() {
    int subChoice;
    do {
        cout << "\n--- Grade 8 Books ---\n";
        cout << "1. Math\n";
        cout << "2. Science\n";
        cout << "3. Social Studies\n";
        cout << "4. English\n";
        cout << "5. Back\n";
        cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

        switch (subChoice) {
            case 1:
                cout << "Grade 8 Math: Download textbooks for advanced algebra, geometry, and linear equations.\n";
                break;
            case 2:
                cout << "Grade 8 Science: Download textbooks for physical science, biology, and earth science.\n";
                break;
            case 3:
                cout << "Grade 8 Social Studies: Download textbooks for history, geography, and political science.\n";
                break;
            case 4:
                cout << "Grade 8 English: Download textbooks for writing techniques, literature, and grammar.\n";
                break;
            case 5:
                cout << "Returning to Secondary School Books...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (subChoice != 5);
}

// Back function to return to the previous menu

void seniorSecondarySchoolBooks() {
    int choice;
    do {
        cout << "\nSenior Secondary School Books: Choose a grade.\n";
        cout << "1. Grade 11\n";
        cout << "2. Grade 12\n";
        cout << "3. Back\n";
        cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                grade11Books();
                break;
            case 2:
                grade12Books();
                break;
            case 3:
                backToNcertResources();
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 3);
}

// Grade 11 books details with nested switch
void grade11Books() {
    int subChoice;
    do {
        cout << "\n--- Grade 11 Books ---\n";
        cout << "1. Physics\n";
        cout << "2. Chemistry\n";
        cout << "3. Math\n";
        cout << "4. Biology\n";
        cout << "5. English\n";
        cout << "6. Back\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

        switch (subChoice) {
            case 1:
                cout << "Grade 11 Physics: Download textbooks on mechanics, thermodynamics, and waves.\n";
                break;
            case 2:
                cout << "Grade 11 Chemistry: Download textbooks on organic chemistry, acids, and bases.\n";
                break;
            case 3:
                cout << "Grade 11 Math: Download textbooks on calculus, algebra, and geometry.\n";
                break;
            case 4:
                cout << "Grade 11 Biology: Download textbooks on cell biology, genetics, and ecology.\n";
                break;
            case 5:
                cout << "Grade 11 English: Download textbooks on literature, grammar, and writing skills.\n";
                break;
            case 6:
                cout << "Returning to Senior Secondary School Books...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (subChoice != 6);
}

// Grade 12 books details with nested switch
void grade12Books() {
    int subChoice;
    do {
        cout << "\n--- Grade 12 Books ---\n";
        cout << "1. Physics\n";
        cout << "2. Chemistry\n";
        cout << "3. Math\n";
        cout << "4. Biology\n";
        cout << "5. English\n";
        cout << "6. Back\n";
        cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

        switch (subChoice) {
            case 1:
                cout << "Grade 12 Physics: Download textbooks on electromagnetism, optics, and modern physics.\n";
                break;
            case 2:
                cout << "Grade 12 Chemistry: Download textbooks on physical chemistry, inorganic chemistry, and organic reactions.\n";
                break;
            case 3:
                cout << "Grade 12 Math: Download textbooks on differential equations, matrices, and vectors.\n";
                break;
            case 4:
                cout << "Grade 12 Biology: Download textbooks on physiology, genetics, and biotechnology.\n";
                break;
            case 5:
                cout << "Grade 12 English: Download textbooks on literature, poetry, and advanced grammar.\n";
                break;
            case 6:
                cout << "Returning to Senior Secondary School Books...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (subChoice != 6);
}

// Back function to return to the previous menu
void backToNcertResources() {
    cout << "Returning to NCERT Resources...\n";
}

void codingPlatformsResources() {
    int choice;
    cout << "\nCoding Platforms: Learn programming for free.\n";
    cout << "1. Code.org\n";
    cout << "2. FreeCodeCamp\n";
    cout << "3. HackerRank\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            codeOrgResources();
            break;
        case 2:
            freeCodeCampResources();
            break;
        case 3:
            hackerRankResources();
            break;
        case 4:
            cout << "Returning to Free Learning Resources...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void codeOrgResources() {
    int choice;
    do {
        cout << "\nCode.org: Choose a programming topic.\n";
        cout << "1. Hour of Code\n";
        cout << "2. Coding Lessons\n";
        cout << "3. Back\n";
        cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                hourOfCode();
                break;
            case 2:
                codingLessons();
                break;
            case 3:
                backToCodingPlatforms();
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 3);
}

// Hour of Code details with a nested switch
void hourOfCode() {
    int subChoice;
    do {
        cout << "\n--- Hour of Code ---\n";
        cout << "1. Beginner Level Challenges\n";
        cout << "2. Intermediate Level Challenges\n";
        cout << "3. Advanced Level Challenges\n";
        cout << "4. Back\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

        switch (subChoice) {
            case 1:
                cout << "Beginner Level Challenges: Learn basic programming concepts through simple coding exercises.\n";
                break;
            case 2:
                cout << "Intermediate Level Challenges: Try more complex coding problems focusing on algorithms and problem-solving.\n";
                break;
            case 3:
                cout << "Advanced Level Challenges: Work on real-world projects and advanced coding techniques.\n";
                break;
            case 4:
                cout << "Returning to Code.org Resources...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (subChoice != 4);
}

// Coding Lessons details with a nested switch
void codingLessons() {
    int subChoice;
    do {
        cout << "\n--- Coding Lessons ---\n";
        cout << "1. Learn Python\n";
        cout << "2. Learn JavaScript\n";
        cout << "3. Learn Web Development (HTML/CSS)\n";
        cout << "4. Back\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

        switch (subChoice) {
            case 1:
                cout << "Learn Python: Start with the basics of Python programming including data types, functions, and loops.\n";
                break;
            case 2:
                cout << "Learn JavaScript: Understand web programming concepts with JavaScript including DOM manipulation and events.\n";
                break;
            case 3:
                cout << "Learn Web Development: Learn how to build websites using HTML for structure and CSS for styling.\n";
                break;
            case 4:
                cout << "Returning to Code.org Resources...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (subChoice != 4);
}

// Back function to return to the previous menu
void backToCodingPlatforms() {
    cout << "Returning to Coding Platforms...\n";
}

void freeCodeCampResources() {
    int choice;
    do {
        cout << "\nFreeCodeCamp: Choose a programming topic.\n";
        cout << "1. HTML/CSS\n";
        cout << "2. JavaScript\n";
        cout << "3. Python\n";
        cout << "4. Back\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                htmlCssLesson();
                break;
            case 2:
                javascriptLesson();
                break;
            case 3:
                pythonLesson();
                break;
            case 4:
                backToCodingPlatforms();
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);
}

// HTML/CSS lesson details with a nested switch
void htmlCssLesson() {
    int subChoice;
    do {
        cout << "\n--- HTML/CSS ---\n";
        cout << "1. HTML Basics\n";
        cout << "2. CSS Styling\n";
        cout << "3. Building Web Pages\n";
        cout << "4. Back\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

        switch (subChoice) {
            case 1:
                cout << "HTML Basics: Learn about elements, tags, and structure of HTML documents.\n";
                break;
            case 2:
                cout << "CSS Styling: Learn how to style HTML elements with CSS.\n";
                break;
            case 3:
                cout << "Building Web Pages: Learn how to build responsive and interactive web pages using HTML and CSS.\n";
                break;
            case 4:
                cout << "Returning to FreeCodeCamp Resources...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (subChoice != 4);
}

// JavaScript lesson details with a nested switch
void javascriptLesson() {
    int subChoice;
    do {
        cout << "\n--- JavaScript ---\n";
        cout << "1. JavaScript Basics\n";
        cout << "2. DOM Manipulation\n";
        cout << "3. Interactive Web Pages\n";
        cout << "4. Back\n";
        cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

        switch (subChoice) {
            case 1:
                cout << "JavaScript Basics: Learn the syntax and basic concepts like variables and functions.\n";
                break;
            case 2:
                cout << "DOM Manipulation: Learn how to manipulate the HTML DOM using JavaScript.\n";
                break;
            case 3:
                cout << "Interactive Web Pages: Learn how to make web pages interactive using JavaScript events and functions.\n";
                break;
            case 4:
                cout << "Returning to FreeCodeCamp Resources...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (subChoice != 4);
}

// Python lesson details with a nested switch
void pythonLesson() {
    int subChoice;
    do {
        cout << "\n--- Python ---\n";
        cout << "1. Python Basics\n";
        cout << "2. Data Structures\n";
        cout << "3. Object-Oriented Programming\n";
        cout << "4. Back\n";
        cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

        switch (subChoice) {
            case 1:
                cout << "Python Basics: Learn about Python syntax, variables, and basic operations.\n";
                break;
            case 2:
                cout << "Data Structures: Learn about Python's built-in data structures like lists, dictionaries, and sets.\n";
                break;
            case 3:
                cout << "Object-Oriented Programming: Learn how to create classes and objects in Python.\n";
                break;
            case 4:
                cout << "Returning to FreeCodeCamp Resources...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (subChoice != 4);
}

// Back function to return to the previous menu

void hackerRankResources() {
    int choice;
    cout << "\nHackerRank: Choose a coding challenge.\n";
    cout << "1. Python Challenges\n";
    cout << "2. JavaScript Challenges\n";
    cout << "3. C++ Challenges\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Python Challenges: Practice Python programming with real-world problems.\n";
            break;
        case 2:
            cout << "JavaScript Challenges: Improve JavaScript skills with challenges.\n";
            break;
        case 3:
            cout << "C++ Challenges: Solve problems in C++ programming.\n";
            break;
        case 4:
            cout << "Returning to Coding Platforms...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void careerCounseling() {
    int choice;
    cout << "\n--- Career Counseling ---" << endl;
    cout << "1. Career Guidance Sessions\n";
    cout << "2. Online Career Counselors\n";
    cout << "3. Helpline Numbers\n";
    cout << "4. Government Career Programs\n";
    cout << "5. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            careerGuidanceSessions();
            break;
        case 2:
            onlineCareerCounselors();
            break;
        case 3:
            helplineNumbers();
            break;
        case 4:
            governmentCareerPrograms();
            break;
        case 5:
            cout << "Returning to the Education Module...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void careerGuidanceSessions() {
    int choice;
    do {
        cout << "\nCareer Guidance Sessions: Choose the type of career guidance session you're interested in.\n";
        cout << "1. Government Career Guidance Programs\n";
        cout << "2. NGO Career Counseling Sessions\n";
        cout << "3. Local Education Board Sessions\n";
        cout << "4. Back\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1: {
                int subChoice;
                cout << "\nGovernment Career Guidance Programs: These programs provide career advice through government-run initiatives.\n";
                cout << "1. National Career Service (NCS)\n";
                cout << "2. Ministry of Skill Development Programs\n";
                cout << "3. Back\n";
                cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

                switch (subChoice) {
                    case 1:
                        cout << "National Career Service (NCS): A platform providing career guidance, counseling, and job placement support.\n";
                        cout << "Website: www.ncs.gov.in\n";
                        break;
                    case 2:
                        cout << "Ministry of Skill Development Programs: Provides free vocational and skill development programs.\n";
                        cout << "Check with local Ministry of Skill Development offices for details.\n";
                        break;
                    case 3:
                        cout << "Returning to Career Guidance Sessions...\n";
                        break;
                    default:
                        cout << "Invalid choice! Please try again.\n";
                }
                break;
            }
            case 2: {
                int subChoice;
                cout << "\nNGO Career Counseling Sessions: Non-governmental organizations that provide career guidance and counseling.\n";
                cout << "1. Pratham Foundation\n";
                cout << "2. Akshaya Patra\n";
                cout << "3. Smile Foundation\n";
                cout << "4. Back\n";
                 cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> subChoice;
        cout<<"------------------------------------------"<<endl;

                switch (subChoice) {
                    case 1:
                        cout << "Pratham Foundation: Provides career guidance for students and adults, particularly in low-income areas.\n";
                        cout << "Contact your local Pratham office for details on available programs.\n";
                        break;
                    case 2:
                        cout << "Akshaya Patra: Offers career counseling along with educational support to underprivileged students.\n";
                        cout << "Contact your local Akshaya Patra office.\n";
                        break;
                    case 3:
                        cout << "Smile Foundation: Provides career counseling to help children and youth build a brighter future.\n";
                        cout << "Contact Smile Foundation's local offices for program details.\n";
                        break;
                    case 4:
                        cout << "Returning to Career Guidance Sessions...\n";
                        break;
                    default:
                        cout << "Invalid choice! Please try again.\n";
                }
                break;
            }
            case 3: {
                int subChoice;
                cout << "\nLocal Education Board Career Guidance Sessions: Sessions conducted by local educational boards to help students choose their career paths.\n";
                cout << "1. State Education Boards\n";
                cout << "2. District-Level Education Offices\n";
                cout << "3. Back\n";
                cout << "Enter your choice: ";
                cin >> subChoice;

                switch (subChoice) {
                    case 1:
                        cout << "State Education Boards: Offers career guidance sessions for students, often including workshops and counseling.\n";
                        cout << "Contact your local state education board office for more information.\n";
                        break;
                    case 2:
                        cout << "District-Level Education Offices: Provides career counseling through district-level workshops and one-on-one sessions.\n";
                        cout << "Visit your district education office for details on upcoming sessions.\n";
                        break;
                    case 3:
                        cout << "Returning to Career Guidance Sessions...\n";
                        break;
                    default:
                        cout << "Invalid choice! Please try again.\n";
                }
                break;
            }
            case 4:
                cout << "Returning to the main menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);  // Loop back until '4' (Back) is selected
}


void onlineCareerCounselors() {
    int choice;
    cout << "\nOnline Career Counselors: Choose the type of career advice you need.\n";
    cout << "1. Career Guidance Websites\n";
    cout << "2. Personality Assessment Services\n";
    cout << "3. Career Path Suggestions\n";
    cout << "4. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            careerGuidanceWebsites();
            break;
        case 2:
            personalityAssessmentServices();
            break;
        case 3:
            careerPathSuggestions();
            break;
        case 4:
            cout << "Returning to Career Counseling...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void careerGuidanceWebsites() {
    int choice;
    cout << "\nCareer Guidance Websites: Popular platforms for professional career advice.\n";
    cout << "1. CareerGuide.com\n";
    cout << "2. Univariety\n";
    cout << "3. iDreamCareer\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "CareerGuide.com: Provides career counseling, aptitude tests, and personalized guidance.\n";
            cout << "Website: www.careerguide.com\n";
            break;
        case 2:
            cout << "Univariety: Helps with career exploration, university selection, and career counseling.\n";
            cout << "Website: www.univariety.com\n";
            break;
        case 3:
            cout << "iDreamCareer: Provides career counseling and college selection guidance for students.\n";
            cout << "Website: www.idreamcareer.com\n";
            break;
        case 4:
            cout << "Returning to Online Career Counselors...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void personalityAssessmentServices() {
    int choice;
    cout << "\nPersonality Assessment Services: Websites offering personality tests to guide career choices.\n";
    cout << "1. 16Personalities\n";
    cout << "2. Myers-Briggs Type Indicator (MBTI)\n";
    cout << "3. CareerFitter\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "16Personalities: Offers a free personality test based on the Myers-Briggs Type Indicator.\n";
            cout << "Website: www.16personalities.com\n";
            break;
        case 2:
            cout << "MBTI: A widely-used personality test for career and personal development.\n";
            cout << "Website: www.mbtionline.com\n";
            break;
        case 3:
            cout << "CareerFitter: Provides a career test to help identify the best career matches for you.\n";
            cout << "Website: www.careerfitter.com\n";
            break;
        case 4:
            cout << "Returning to Online Career Counselors...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void careerPathSuggestions() {
    int choice;
    cout << "\nCareer Path Suggestions: Services that suggest career paths based on interests and skills.\n";
    cout << "1. CareerExplorer\n";
    cout << "2. PathSource\n";
    cout << "3. Sokanu\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "CareerExplorer: Provides personalized career suggestions based on your interests.\n";
            cout << "Website: www.careerexplorer.com\n";
            break;
        case 2:
            cout << "PathSource: Suggests career paths and educational resources for each career choice.\n";
            cout << "Website: www.pathsource.com\n";
            break;
        case 3:
            cout << "Sokanu: Helps users discover their ideal careers based on interests and personality.\n";
            cout << "Website: www.sokanu.com\n";
            break;
        case 4:
            cout << "Returning to Online Career Counselors...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}


void helplineNumbers() {
    int choice;
    cout << "\nHelpline Numbers: Choose the type of assistance you need.\n";
    cout << "1. Career Counseling Helplines\n";
    cout << "2. Education-Related Helplines\n";
    cout << "3. Skill Development Helplines\n";
    cout << "4. Government Schemes and Welfare Helplines\n";
    cout << "5. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            careerCounselingHelplines();
            break;
        case 2:
            educationHelplines();
            break;
        case 3:
            skillDevelopmentHelplines();
            break;
        case 4:
            governmentWelfareHelplines();
            break;
        case 5:
            cout << "Returning to Career Counseling...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void careerCounselingHelplines() {
    int choice;
    cout << "\nCareer Counseling Helplines: Get professional advice.\n";
    cout << "1. National Career Counseling Helpline\n";
    cout << "2. State-Level Career Counseling Helplines\n";
    cout << "3. Online Career Guidance Services\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "National Career Counseling Helpline: Contact 1800-XXX-XXXX for free career guidance.\n";
            break;
        case 2:
            cout << "State-Level Helplines: Contact the State Education Board for regional career guidance services.\n";
            break;
        case 3:
            cout << "Online Career Guidance: Websites like CareerGuide.com and Univariety offer online counseling.\n";
            break;
        case 4:
            cout << "Returning to Helpline Numbers...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void educationHelplines() {
    int choice;
    cout << "\nEducation-Related Helplines: Get assistance with education-related queries.\n";
    cout << "1. National Scholarship Portal Helpline\n";
    cout << "2. NCERT Educational Support\n";
    cout << "3. School Enrollment Assistance\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "National Scholarship Portal Helpline: Call 1800-XXXX-XXXX for scholarship-related queries.\n";
            break;
        case 2:
            cout << "NCERT Educational Support: Contact the NCERT helpline for educational resources and support.\n";
            break;
        case 3:
            cout << "School Enrollment Assistance: Reach out to the nearest district education office for enrollment support.\n";
            break;
        case 4:
            cout << "Returning to Helpline Numbers...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void skillDevelopmentHelplines() {
    int choice;
    cout << "\nSkill Development Helplines: Get assistance with skill development programs.\n";
    cout << "1. National Skill Development Corporation (NSDC)\n";
    cout << "2. Ministry of Skill Development and Entrepreneurship (MSDE)\n";
    cout << "3. Apprenticeship Schemes Helpline\n";
    cout << "4. Back\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "NSDC Helpline: Contact 1800-XXX-XXXX for inquiries related to skill development and training programs.\n";
            break;
        case 2:
            cout << "MSDE Helpline: Reach out to the Ministry of Skill Development for information on skill training schemes.\n";
            break;
        case 3:
            cout << "Apprenticeship Schemes Helpline: Call 1800-XXX-XXXX for information about apprenticeship opportunities.\n";
            break;
        case 4:
            cout << "Returning to Helpline Numbers...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void governmentWelfareHelplines() {
    int choice;
    cout << "\nGovernment Schemes and Welfare Helplines: Get assistance with government welfare programs.\n";
    cout << "1. MGNREGA (Rural Employment) Helpline\n";
    cout << "2. PDS (Public Distribution System) Helpline\n";
    cout << "3. Rural Development Programs Helpline\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "MGNREGA Helpline: Call 1800-XXX-XXXX for assistance with rural employment opportunities under MGNREGA.\n";
            break;
        case 2:
            cout << "PDS Helpline: Contact 1800-XXX-XXXX for queries related to the Public Distribution System for food security.\n";
            break;
        case 3:
            cout << "Rural Development Programs Helpline: Get support for rural development schemes by calling 1800-XXX-XXXX.\n";
            break;
        case 4:
            cout << "Returning to Helpline Numbers...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}


void governmentCareerPrograms() {
    int choice;
    cout << "\nGovernment Career Development Programs: Vocational training and internships.\n";
    cout << "1. Vocational Training\n";
    cout << "2. Internships and Apprenticeships\n";
    cout << "3. Skill Development Programs\n";
    cout << "4. Government Employment Schemes\n";
    cout << "5. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            vocationalTraining();
            break;
        case 2:
            internshipsAndApprenticeships();
            break;
        case 3:
            skillDevelopmentPrograms();
            break;
        case 4:
            governmentEmploymentSchemes();
            break;
        case 5:
            cout << "Returning to Career Counseling...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void vocationalTraining() {
    int choice;
    cout << "\nVocational Training: Choose the training area.\n";
    cout << "1. Technical Skills\n";
    cout << "2. Trade Skills\n";
    cout << "3. Soft Skills\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Technical Skills: Training in areas like welding, plumbing, electrical work, etc.\n";
            break;
        case 2:
            cout << "Trade Skills: Learn trades like carpentry, masonry, tailoring, etc.\n";
            break;
        case 3:
            cout << "Soft Skills: Training in communication, teamwork, leadership, and other soft skills.\n";
            break;
        case 4:
            cout << "Returning to Government Career Programs...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void internshipsAndApprenticeships() {
    int choice;
    cout << "\nInternships and Apprenticeships: Choose the type of program.\n";
    cout << "1. Government Internships\n";
    cout << "2. Private Sector Internships\n";
    cout << "3. Apprenticeships for Skill Development\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Government Internships: Apply for internships with government departments and ministries.\n";
            break;
        case 2:
            cout << "Private Sector Internships: Explore internship opportunities in private companies under government schemes.\n";
            break;
        case 3:
            cout << "Apprenticeships for Skill Development: Join apprenticeship programs offered by industries to enhance practical skills.\n";
            break;
        case 4:
            cout << "Returning to Government Career Programs...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void skillDevelopmentPrograms() {
    int choice;
    cout << "\nSkill Development Programs: Choose a skill development area.\n";
    cout << "1. Ministry of Skill Development and Entrepreneurship (MSDE) Programs\n";
    cout << "2. National Skill Development Corporation (NSDC) Programs\n";
    cout << "3. National Apprenticeship Promotion Scheme (NAPS)\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "MSDE Programs: Skill training provided by various training centers under the Ministry of Skill Development.\n";
            break;
        case 2:
            cout << "NSDC Programs: Programs offered by the National Skill Development Corporation to enhance industry-relevant skills.\n";
            break;
        case 3:
            cout << "NAPS: Government initiative to promote apprenticeships across various industries.\n";
            break;
        case 4:
            cout << "Returning to Government Career Programs...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void governmentEmploymentSchemes() {
    int choice;
    cout << "\nGovernment Employment Schemes: Choose a scheme to learn more.\n";
    cout << "1. National Employment Service (NES)\n";
    cout << "2. MGNREGA (Mahatma Gandhi National Rural Employment Guarantee Act)\n";
    cout << "3. Employment Exchange Programs\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "National Employment Service: Government job placement and counseling service.\n";
            break;
        case 2:
            cout << "MGNREGA: Rural employment guarantee program providing paid work for public works.\n";
            break;
        case 3:
            cout << "Employment Exchange Programs: Registration and job placement services through government-run employment exchanges.\n";
            break;
        case 4:
            cout << "Returning to Government Career Programs...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}


void nearbyEducationalInstitutions() {
    int choice;
    cout << "\n--- Nearby Educational Institutions ---" << endl;
    cout << "1. Government Schools\n";
    cout << "2. Skill Development Centers\n";
    cout << "3. Evening Classes for Adults\n";
    cout << "4. Scholarship Support Centers\n";
    cout << "5. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            governmentSchools();
            break;
        case 2:
            skillDevelopmentCenters();
            break;
        case 3:
            eveningClassesForAdults();
            break;
        case 4:
            scholarshipSupportCenters();
            break;
        case 5:
            cout << "Returning to the Education Module...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void governmentSchools() {
    int choice;
    cout << "\nGovernment Schools: Free education for children up to grade 12.\n";
    cout << "1. Enrollment Process\n";
    cout << "2. Types of Schools\n";
    cout << "3. Government Scholarships for Students\n";
    cout << "4. Special Education Programs\n";
    cout << "5. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            enrollmentProcess();
            break;
        case 2:
            typesOfSchools();
            break;
        case 3:
            governmentScholarships();
            break;
        case 4:
            specialEducationPrograms();
            break;
        case 5:
            cout << "Returning to Nearby Educational Institutions...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void enrollmentProcess() {
    int choice;
    cout << "\nEnrollment Process: Choose the type of enrollment assistance.\n";
    cout << "1. Online Enrollment\n";
    cout << "2. Offline Enrollment\n";
    cout << "3. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Online Enrollment: Visit the official government school website to complete the online registration.\n";
            break;
        case 2:
            cout << "Offline Enrollment: Visit the nearest government school and fill out the enrollment form in person.\n";
            break;
        case 3:
            cout << "Returning to Government Schools...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void typesOfSchools() {
    int choice;
    cout << "\nTypes of Government Schools: Choose a type of school.\n";
    cout << "1. Primary Schools (Grades 1-5)\n";
    cout << "2. Middle Schools (Grades 6-8)\n";
    cout << "3. High Schools (Grades 9-12)\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Primary Schools: Offer basic education for young children from grades 1 to 5.\n";
            break;
        case 2:
            cout << "Middle Schools: Focus on foundational subjects for grades 6 to 8.\n";
            break;
        case 3:
            cout << "High Schools: Provide advanced education for grades 9 to 12, preparing students for higher studies or employment.\n";
            break;
        case 4:
            cout << "Returning to Government Schools...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void governmentScholarships() {
    int choice;
    cout << "\nGovernment Scholarships for Students: Choose a type of scholarship.\n";
    cout << "1. Merit-based Scholarships\n";
    cout << "2. Need-based Scholarships\n";
    cout << "3. Scholarships for Disabled Students\n";
    cout << "4. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Merit-based Scholarships: Awarded to students based on academic performance.\n";
            break;
        case 2:
            cout << "Need-based Scholarships: Provided to students from economically weaker sections of society.\n";
            break;
        case 3:
            cout << "Scholarships for Disabled Students: Financial aid and scholarships available for students with disabilities.\n";
            break;
        case 4:
            cout << "Returning to Government Schools...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void specialEducationPrograms() {
    int choice;
    cout << "\nSpecial Education Programs: Choose a special education option.\n";
    cout << "1. Special Needs Education\n";
    cout << "2. Language Support for Non-Native Speakers\n";
    cout << "3. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Special Needs Education: Programs designed for students with physical or mental disabilities.\n";
            break;
        case 2:
            cout << "Language Support: Programs to help students who are not fluent in the local language.\n";
            break;
        case 3:
            cout << "Returning to Government Schools...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}


void skillDevelopmentCenters() {
    int choice;
    cout << "\nSkill Development Centers: Learn vocational skills like tailoring, carpentry, or computer basics.\n";
    cout << "1. Tailoring\n";
    cout << "2. Carpentry\n";
    cout << "3. Computer Basics\n";
    cout << "4. Language Skills\n";
    cout << "5. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            tailoringSkills();
            break;
        case 2:
            carpentrySkills();
            break;
        case 3:
            computerSkills();
            break;
        case 4:
            languageSkills();
            break;
        case 5:
            cout << "Returning to Nearby Educational Institutions...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void tailoringSkills() {
    int choice;
    cout << "\nTailoring Skills: Choose a type of tailoring skill to learn.\n";
    cout << "1. Basic Stitching\n";
    cout << "2. Advanced Stitching\n";
    cout << "3. Fashion Designing\n";
    cout << "4. Back\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Basic Stitching: Learn the fundamentals of stitching, cutting, and sewing.\n";
            break;
        case 2:
            cout << "Advanced Stitching: Master techniques like embroidery, patchwork, and advanced sewing.\n";
            break;
        case 3:
            cout << "Fashion Designing: Learn to design clothes, create patterns, and understand fabric selection.\n";
            break;
        case 4:
            cout << "Returning to Skill Development Centers...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void carpentrySkills() {
    int choice;
    cout << "\nCarpentry Skills: Choose a type of carpentry skill to learn.\n";
    cout << "1. Basic Carpentry\n";
    cout << "2. Furniture Making\n";
    cout << "3. Woodworking Techniques\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Basic Carpentry: Learn to use tools like hammers, saws, and drills for simple carpentry tasks.\n";
            break;
        case 2:
            cout << "Furniture Making: Learn how to build furniture from wood, including tables, chairs, and shelves.\n";
            break;
        case 3:
            cout << "Woodworking Techniques: Learn advanced woodworking techniques like joinery, sanding, and finishing.\n";
            break;
        case 4:
            cout << "Returning to Skill Development Centers...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void computerSkills() {
    int choice;
    cout << "\nComputer Basics: Choose a type of computer skill to learn.\n";
    cout << "1. Microsoft Office (Word, Excel, PowerPoint)\n";
    cout << "2. Internet and Email\n";
    cout << "3. Programming Basics\n";
    cout << "4. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Microsoft Office: Learn to use tools like Word, Excel, and PowerPoint for basic office tasks.\n";
            break;
        case 2:
            cout << "Internet and Email: Learn to navigate the internet, use search engines, and send/receive emails.\n";
            break;
        case 3:
            cout << "Programming Basics: Introduction to programming languages like Python, Java, and HTML.\n";
            break;
        case 4:
            cout << "Returning to Skill Development Centers...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void languageSkills() {
    int choice;
    cout << "\nLanguage Skills: Choose a language skill to improve.\n";
    cout << "1. English Language\n";
    cout << "2. Regional Languages\n";
    cout << "3. Foreign Languages\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "English Language: Improve reading, writing, speaking, and listening skills in English.\n";
            break;
        case 2:
            cout << "Regional Languages: Learn regional languages like Hindi, Tamil, Telugu, etc.\n";
            break;
        case 3:
            cout << "Foreign Languages: Learn foreign languages like French, Spanish, German, etc.\n";
            break;
        case 4:
            cout << "Returning to Skill Development Centers...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}


void eveningClassesForAdults() {
    cout << "\nEvening Classes for Adults: Adult literacy programs for reading, writing, and arithmetic.\n";
    cout << "NGOs like Pratham offer such services.\n";
}

void scholarshipSupportCenters() {
    int choice;
    cout << "\nScholarship Support Centers: Offices to assist with scholarship applications.\n";
    cout << "1. Application Assistance\n";
    cout << "2. Documentation Guidance\n";
    cout << "3. Interview Preparation\n";
    cout << "4. Scholarship Information\n";
    cout << "5. Back\n";
  cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            applicationAssistance();
            break;
        case 2:
            documentationGuidance();
            break;
        case 3:
            interviewPreparation();
            break;
        case 4:
            scholarshipInformation();
            break;
        case 5:
            cout << "Returning to Nearby Educational Institutions...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void applicationAssistance() {
    int choice;
    cout << "\nApplication Assistance: Choose a type of assistance.\n";
    cout << "1. Online Application Help\n";
    cout << "2. Paper-based Application Help\n";
    cout << "3. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Online Application Help: Assistance with filling out online forms, uploading documents, and submitting applications.\n";
            break;
        case 2:
            cout << "Paper-based Application Help: Guidance for filling out paper applications, attaching necessary documents, and submitting to relevant authorities.\n";
            break;
        case 3:
            cout << "Returning to Scholarship Support Centers...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void documentationGuidance() {
    int choice;
    cout << "\nDocumentation Guidance: Choose a type of document.\n";
    cout << "1. Identity Proof\n";
    cout << "2. Income Certificate\n";
    cout << "3. Academic Records\n";
    cout << "4. Back\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Identity Proof: Guidance on required documents like Aadhar card, voter ID, or passport.\n";
            break;
        case 2:
            cout << "Income Certificate: Assistance in obtaining an income certificate from local authorities.\n";
            break;
        case 3:
            cout << "Academic Records: Support for collecting and verifying academic records like report cards, transcripts, and certificates.\n";
            break;
        case 4:
            cout << "Returning to Scholarship Support Centers...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void interviewPreparation() {
    int choice;
    cout << "\nInterview Preparation: Choose a service.\n";
    cout << "1. Mock Interviews\n";
    cout << "2. Interview Tips\n";
    cout << "3. Back\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Mock Interviews: Practice interview sessions with experts to prepare for scholarship interviews.\n";
            break;
        case 2:
            cout << "Interview Tips: Get tips on how to present yourself, common questions, and how to answer them.\n";
            break;
        case 3:
            cout << "Returning to Scholarship Support Centers...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void scholarshipInformation() {
    int choice;
    cout << "\nScholarship Information: Choose a category.\n";
    cout << "1. Government Scholarships\n";
    cout << "2. Private Scholarships\n";
    cout << "3. International Scholarships\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Government Scholarships: Information on national and state government scholarship schemes for various categories.\n";
            break;
        case 2:
            cout << "Private Scholarships: Information on scholarships provided by private organizations and corporate companies.\n";
            break;
        case 3:
            cout << "International Scholarships: Information on scholarships available for studying abroad.\n";
            break;
        case 4:
            cout << "Returning to Scholarship Support Centers...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}



void health() {
    int choice;
    do {
        cout << "\n=== Health Module ===" << endl;
        cout << "1. Free Healthcare Services\n";
        cout << "2. Vaccination Programs\n";
        cout << "3. Hygiene Awareness\n";
        cout << "4. Mental Health Support\n";
        cout << "5. Nearby Healthcare Centers\n";
        cout << "6. Back to Main Menu\n";
        cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                freeHealthcareServices();
                break;
            case 2:
                vaccinationPrograms();
                break;
            case 3:
                hygieneAwareness();
                break;
            case 4:
                mentalHealthSupport();
                break;
            case 5:
                nearbyHealthcareCenters();
                break;
            case 6:
                cout << "Returning to the main menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 6);
}


void freeHealthcareServices() {
    int choice;
    cout << "\n--- Free Healthcare Services ---" << endl;
    cout << "1. Government Hospitals\n";
    cout << "2. Mobile Health Units\n";
    cout << "3. NGO Medical Camps\n";
    cout << "4. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            governmentHospitals();
            break;
        case 2:
            mobileHealthUnits();
            break;
        case 3:
            ngoMedicalCamps();
            break;
        case 4:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

// Government Hospitals Menu
void governmentHospitals() {
    int choice;
    cout << "\n--- Government Hospitals ---" << endl;
    cout << "1. Registration Process\n";
    cout << "2. Available Services\n";
    cout << "3. Contact Information\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            civilHospitalDetails();
            break;
        case 2:
            cout << "\nGovernment Hospitals provide free treatment and medicines for economically weaker sections.\n";
            cout << "Services include outpatient care, inpatient services, surgeries, and medications.\n";
            break;
        case 3:
            cout << "\nFor more details, visit your nearest civil hospital or call the local health helpline.\n";
            break;
        case 4:
            cout << "Returning to Free Healthcare Services...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

// Civil Hospital Registration Details
void civilHospitalDetails() {
    cout << "\nCivil Hospital Registration: To register, visit your nearest government hospital.\n";
    cout << "Bring proof of income and residence for verification.\n";
}

// Mobile Health Units Menu
void mobileHealthUnits() {
    int choice;
    cout << "\n--- Mobile Health Units ---" << endl;
    cout << "1. Health Check-Up Schedule\n";
    cout << "2. Services Provided\n";
    cout << "3. Contact Information\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            healthCheckUpSchedule();
            break;
        case 2:
            cout << "\nMobile Health Units provide free health check-ups, screening, and vaccination in slum areas.\n";
            break;
        case 3:
            cout << "\nContact your local municipal authorities to get the schedule and information about mobile health units.\n";
            break;
        case 4:
            cout << "Returning to Free Healthcare Services...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

// Health Check-Up Schedule Details
void healthCheckUpSchedule() {
    cout << "\nHealth Check-Up Schedule: The mobile health units visit various slum areas on a weekly basis.\n";
    cout << "For the specific schedule, contact your local health department or municipal office.\n";
}

// NGO Medical Camps Menu
void ngoMedicalCamps() {
    int choice;
    cout << "\n--- NGO Medical Camps ---" << endl;
    cout << "1. NGO Camp Details\n";
    cout << "2. Services Provided\n";
    cout << "3. Contact Information\n";
    cout << "4. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            ngoCampDetails();
            break;
        case 2:
            cout << "\nNGO Medical Camps provide free check-ups, vaccinations, and medicine distribution.\n";
            cout << "Popular NGOs involved include Smile Foundation and Doctors Without Borders.\n";
            break;
        case 3:
            cout << "\nTo find a nearby NGO medical camp, contact the relevant NGOs or visit their websites.\n";
            break;
        case 4:
            cout << "Returning to Free Healthcare Services...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

// NGO Camp Details
void ngoCampDetails() {
    cout << "\nNGO Medical Camps: These camps are organized by NGOs such as Smile Foundation and Doctors Without Borders.\n";
    cout << "Check their official websites or local notices for the camp schedule.\n";
}

void vaccinationPrograms() {
    int choice;
    cout << "\n--- Vaccination Programs ---" << endl;
    cout << "1. Immunization for Children\n";
    cout << "2. Covid-19 Vaccination\n";
    cout << "3. Awareness Programs\n";
    cout << "4. Helpline\n";
    cout << "5. Back to Health Module\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            immunizationForChildren();
            break;
        case 2:
            covidVaccination();
            break;
        case 3:
            vaccinationAwareness();
            break;
        case 4:
            vaccinationHelpline();
            break;
        case 5:
            cout << "Returning to Health Module...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void immunizationForChildren() {
    int choice;
    cout << "\n--- Immunization for Children ---" << endl;
    cout << "1. Routine Childhood Vaccines\n";
    cout << "2. Special Vaccination Campaigns\n";
    cout << "3. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            childVaccinationDetails();
            break;
        case 2:
            cout << "\nSpecial Vaccination Campaigns: Periodic vaccination drives for areas with low immunization coverage.\n";
            break;
        case 3:
            cout << "Returning to Vaccination Programs...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void childVaccinationDetails() {
    cout << "\nRoutine Childhood Vaccines: Vaccines for polio, measles, BCG, DPT, and others.\n";
    cout << "Visit the nearest government health center for vaccinations.\n";
}

void covidVaccination() {
    int choice;
    cout << "\n--- Covid-19 Vaccination ---" << endl;
    cout << "1. Vaccine Registration\n";
    cout << "2. Vaccine Information\n";
    cout << "3. Side Effects\n";
    cout << "4. Back\n";
 cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            covidVaccineRegistration();
            break;
        case 2:
            cout << "\nCovid-19 Vaccine Information: Free vaccines are available through government centers.\n";
            cout << "Eligible individuals can register on the Co-WIN portal or visit a local health office.\n";
            break;
        case 3:
            covidVaccineSideEffects();
            break;
        case 4:
            cout << "Returning to Vaccination Programs...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void covidVaccineRegistration() {
    cout << "\nCovid-19 Vaccine Registration: You can register on the Co-WIN portal or visit your nearest vaccination center.\n";
    cout << "Follow the instructions provided to complete your registration and book an appointment.\n";
}

void covidVaccineSideEffects() {
    cout << "\nCommon Side Effects: Mild fever, fatigue, headache, and soreness at the injection site.\n";
    cout << "Serious side effects are rare but may include allergic reactions. Contact a health professional if you experience unusual symptoms.\n";
}

void vaccinationAwareness() {
    int choice;
    cout << "\n--- Vaccination Awareness Programs ---" << endl;
    cout << "1. Vaccination Workshops\n";
    cout << "2. Awareness Materials\n";
    cout << "3. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            vaccinationWorkshops();
            break;
        case 2:
            awarenessMaterial();
            break;
        case 3:
            cout << "Returning to Vaccination Programs...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void vaccinationWorkshops() {
    cout << "\nVaccination Workshops: Workshops on the importance of vaccinations for both children and adults.\n";
    cout << "These workshops are held at various community centers and schools.\n";
}

void awarenessMaterial() {
    cout << "\nAwareness Materials: Brochures, posters, and online resources to educate the public about vaccines.\n";
    cout << "Visit your local health center for printed materials or check online for downloadable resources.\n";
}

void vaccinationHelpline() {
    cout << "\nHelpline: Call 1800-XXXX-XXXX for vaccination details, to register for vaccines, or to find the nearest vaccination center.\n";
}

// Hygiene Awareness Menu
void hygieneAwareness() {
    int choice;
    cout << "\n--- Hygiene Awareness ---" << endl;
    cout << "1. Cleanliness Workshops\n";
    cout << "2. Free Hygiene Kits\n";
    cout << "3. Disease Prevention\n";
    cout << "4. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cleanlinessWorkshops();
            break;
        case 2:
            freeHygieneKits();
            break;
        case 3:
            diseasePrevention();
            break;
        case 4:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

// Cleanliness Workshops Menu
void cleanlinessWorkshops() {
    int choice;
    cout << "\n--- Cleanliness Workshops ---" << endl;
    cout << "1. Handwashing Workshops\n";
    cout << "2. Sanitation Workshops\n";
    cout << "3. Waste Disposal Workshops\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            handwashingWorkshops();
            break;
        case 2:
            sanitationWorkshops();
            break;
        case 3:
            wasteDisposalWorkshops();
            break;
        case 4:
            cout << "Returning to Hygiene Awareness...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

// Handwashing Workshops Details
void handwashingWorkshops() {
    cout << "\nHandwashing Workshops: Workshops on proper handwashing techniques to prevent diseases.\n";
    cout << "Workshops conducted by local health authorities and NGOs.\n";
}

// Sanitation Workshops Details
void sanitationWorkshops() {
    cout << "\nSanitation Workshops: Sessions on maintaining hygiene in public spaces and homes.\n";
    cout << "Topics include proper waste disposal, sewage management, and cleanliness practices.\n";
}

// Waste Disposal Workshops Details
void wasteDisposalWorkshops() {
    cout << "\nWaste Disposal Workshops: Education on segregating waste and proper disposal methods.\n";
    cout << "Focus on recycling and managing both household and commercial waste.\n";
}

// Free Hygiene Kits Menu
void freeHygieneKits() {
    cout << "\nFree Hygiene Kits: NGOs distribute hygiene kits containing soaps, toothbrushes, sanitizers, etc.\n";
    cout << "These kits are available at local NGO offices or through health camps.\n";
}

// Disease Prevention Menu
void diseasePrevention() {
    int choice;
    cout << "\n--- Disease Prevention ---" << endl;
    cout << "1. Preventing Waterborne Diseases\n";
    cout << "2. Cleanliness Tips\n";
    cout << "3. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            waterborneDiseasePrevention();
            break;
        case 2:
            cleanlinessTips();
            break;
        case 3:
            cout << "Returning to Hygiene Awareness...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

// Waterborne Disease Prevention Details
void waterborneDiseasePrevention() {
    cout << "\nPreventing Waterborne Diseases: Clean drinking water is essential. Boil water, use filtration systems, and avoid open defecation.\n";
    cout << "Diseases like cholera and typhoid can be prevented by proper water treatment and sanitation.\n";
}

// Cleanliness Tips for Disease Prevention
void cleanlinessTips() {
    cout << "\nCleanliness Tips: Keep your surroundings clean. Dispose of waste properly, avoid open dumping of garbage, and maintain clean toilets.\n";
    cout << "Regularly wash hands, use disinfectants, and clean water sources to prevent disease transmission.\n";
}



// Mental Health Support Menu
void mentalHealthSupport() {
    int choice;
    cout << "\n--- Mental Health Support ---" << endl;
    cout << "1. Mental Health Helpline\n";
    cout << "2. Online Resources\n";
    cout << "3. Community Support Groups\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            mentalHealthHelpline();
            break;
        case 2:
            onlineResources();
            break;
        case 3:
            communitySupportGroups();
            break;
        case 4:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

// Mental Health Helpline Menu
void mentalHealthHelpline() {
    int choice;
    cout << "\n--- Mental Health Helpline ---" << endl;
    cout << "1. 24/7 Mental Health Support\n";
    cout << "2. Crisis Support\n";
    cout << "3. Stress Helpline\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout<<"Mental health support is available for 24 hours .For this call on number 5463728998"<<endl;
            break;
        case 2:
            crisisSupport();
            break;
        case 3:
            stressHelpline();
            break;
        case 4:
            cout << "Returning to Mental Health Support...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}


// Crisis Support Details
void crisisSupport() {
    cout << "\nCrisis Support: If you're in immediate distress, call the crisis support helpline for urgent intervention.\n";
    cout << "Crisis centers are available to handle emergencies like suicide prevention and self-harm.\n";
}

// Stress Helpline Details
void stressHelpline() {
    cout << "\nStress Helpline: Call 1800-YYY-YYYY for assistance managing stress, anxiety, and panic attacks.\n";
    cout << "This helpline connects you with mental health professionals for stress management tips.\n";
}

// Online Resources Menu
void onlineResources() {
    int choice;
    cout << "\n--- Online Resources ---" << endl;
    cout << "1. YourDost\n";
    cout << "2. iCall\n";
    cout << "3. AASRA\n";
    cout << "4. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            yourDost();
            break;
        case 2:
            iCall();
            break;
        case 3:
            AASRA();
            break;
        case 4:
            cout << "Returning to Mental Health Support...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

// YourDost Online Resources Details
void yourDost() {
    cout << "\nYourDost: Online counseling platform offering mental health support for stress, relationships, and emotional health.\n";
    cout << "Visit www.yourdost.com for more information and to connect with a counselor.\n";
}

// iCall Online Resources Details
void iCall() {
    cout << "\niCall: Free, confidential tele-counseling service offering support for emotional and mental health issues.\n";
    cout << "Visit www.icallhelpline.org for more details and services.\n";
}

// AASRA Online Resources Details
void AASRA() {
    cout << "\nAASRA: Provides mental health resources, counseling, and 24/7 support for people facing mental health issues.\n";
    cout << "Visit www.aasra.info to get help.\n";
}

// Community Support Groups Menu
void communitySupportGroups() {
    int choice;
    cout << "\n--- Community Support Groups ---" << endl;
    cout << "1. Group Therapy Sessions\n";
    cout << "2. Peer Support\n";
    cout << "3. Counseling Sessions\n";
    cout << "4. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            groupTherapySessions();
            break;
        case 2:
            peerSupport();
            break;
        case 3:
            counselingSessions();
            break;
        case 4:
            cout << "Returning to Mental Health Support...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

// Group Therapy Sessions Details
void groupTherapySessions() {
    cout << "\nGroup Therapy Sessions: Join group therapy to discuss and share your struggles in a supportive environment.\n";
    cout << "Available both online and in-person, these sessions help you connect with others going through similar challenges.\n";
}

// Peer Support Details
void peerSupport() {
    cout << "\nPeer Support: Support groups where you can share your experiences and provide support to others facing similar mental health challenges.\n";
    cout << "Peer support groups are led by people who have overcome mental health struggles themselves.\n";
}

// Counseling Sessions Details
void counselingSessions() {
    cout << "\nCounseling Sessions: Confidential one-on-one sessions with trained counselors who can help you navigate emotional and psychological issues.\n";
    cout << "Available both online and in-person.\n";
}

void nearbyHealthcareCenters() {
    int choice;
    cout << "\n--- Nearby Healthcare Centers ---" << endl;
    cout << "1. Government Clinics\n";
    cout << "2. Private Hospitals with Subsidized Rates\n";
    cout << "3. Specialized Centers\n";
    cout << "4. Ambulance Services\n";
    cout << "5. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            governmentClinics();
            break;
        case 2:
            privateHospitals();
            break;
        case 3:
            specializedCenters();
            break;
        case 4:
            ambulanceServices();
            break;
        case 5:
            cout << "Returning to Health Module...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

// Function definition for government clinics
void governmentClinics() {
    int choice;
    cout << "\n--- Government Clinics ---" << endl;
    cout << "1. Primary Care Services\n";
    cout << "2. Diagnostic Test Centers\n";
    cout << "3. Immunization and Vaccination Programs\n";
    cout << "4. Health and Wellness Workshops\n";
    cout << "5. Back to Main Menu\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            primaryCareServices();
            break;
        case 2:
            diagnosticTestCenters();
            break;
        case 3:
            immunizationPrograms();
            break;
        case 4:
            wellnessWorkshops();
            break;
        case 5:
            cout << "Returning to the main menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void primaryCareServices() {
    int choice;
    cout << "\n--- Primary Care Services ---" << endl;
    cout << "1. Routine Check-ups\n";
    cout << "2. Family Medicine Consultations\n";
    cout << "3. Chronic Disease Management\n";
    cout << "4. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nRoutine Check-ups: General health assessments for all age groups.\n";
            break;
        case 2:
            cout << "\nFamily Medicine Consultations: Healthcare services for the entire family.\n";
            break;
        case 3:
            cout << "\nChronic Disease Management: Services for managing long-term illnesses like diabetes and hypertension.\n";
            break;
        case 4:
            cout << "Returning to Government Clinics...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void diagnosticTestCenters() {
    int choice;
    cout << "\n--- Diagnostic Test Centers ---" << endl;
    cout << "1. Blood and Urine Tests\n";
    cout << "2. Imaging and X-ray Services\n";
    cout << "3. Pathology Lab Tests\n";
    cout << "4. Back\n";
  cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nBlood and Urine Tests: Includes routine blood tests, sugar level checks, and more.\n";
            break;
        case 2:
            cout << "\nImaging and X-ray Services: For diagnosing bone fractures and internal issues.\n";
            break;
        case 3:
            cout << "\nPathology Lab Tests: Comprehensive tests for various diseases and conditions.\n";
            break;
        case 4:
            cout << "Returning to Government Clinics...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void immunizationPrograms() {
    int choice;
    cout << "\n--- Immunization and Vaccination Programs ---" << endl;
    cout << "1. Routine Child Vaccinations\n";
    cout << "2. Adult Preventive Vaccines\n";
    cout << "3. Vaccination Drive for Pregnant Women\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nRoutine Child Vaccinations: Vaccines for common childhood diseases like measles and polio.\n";
            break;
        case 2:
            cout << "\nAdult Preventive Vaccines: Vaccines for diseases like flu, hepatitis, and pneumonia.\n";
            break;
        case 3:
            cout << "\nVaccination Drive for Pregnant Women: Vaccinations for expectant mothers to ensure safe pregnancy.\n";
            break;
        case 4:
            cout << "Returning to Government Clinics...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void wellnessWorkshops() {
    int choice;
    cout << "\n--- Health and Wellness Workshops ---" << endl;
    cout << "1. Mental Health Awareness\n";
    cout << "2. Nutrition and Healthy Eating\n";
    cout << "3. Fitness and Physical Wellness\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nMental Health Awareness: Workshops on stress management, coping mechanisms, and emotional well-being.\n";
            break;
        case 2:
            cout << "\nNutrition and Healthy Eating: Tips on maintaining a balanced diet and healthy eating habits.\n";
            break;
        case 3:
            cout << "\nFitness and Physical Wellness: Sessions on physical exercises and staying fit.\n";
            break;
        case 4:
            cout << "Returning to Government Clinics...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}


void privateHospitals() {
    int choice;
    cout << "\n--- Private Hospitals with Subsidized Rates ---" << endl;
    cout << "1. Hospital Details\n";
    cout << "2. Hospital Services\n";
    cout << "3. NGO Partnerships\n";
    cout << "4. Contact NGOs\n";
    cout << "5. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            hospitalDetails();
            break;
        case 2:
            hospitalServices();
            break;
        case 3:
            ngoPartnerships();
            break;
        case 4:
            contactNGOs();
            break;
        case 5:
            cout << "Returning to Nearby Healthcare Centers...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void hospitalDetails() {
    int choice;
    cout << "\n--- Hospital Details ---" << endl;
    cout << "1. Hospital Address\n";
    cout << "2. Hospital Timings\n";
    cout << "3. Hospital Specialties\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            hospitalAddress();
            break;
        case 2:
            hospitalTimings();
            break;
        case 3:
            hospitalSpecialties();
            break;
        case 4:
            cout << "Returning to Private Hospitals...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void hospitalAddress() {
    cout << "\nHospital Address: Find the nearest private hospital through the local directory or health apps.\n";
}

void hospitalTimings() {
    cout << "\nHospital Timings: Most private hospitals operate 24/7 for emergencies. Check individual hospital websites for OPD timings.\n";
}

void hospitalSpecialties() {
    int choice;
    cout << "\n--- Hospital Specialties ---" << endl;
    cout << "1. Cardiology\n";
    cout << "2. Orthopedics\n";
    cout << "3. Neurology\n";
    cout << "4. Gastroenterology\n";
    cout << "5. Dermatology\n";
    cout << "6. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cardiology();
            break;
        case 2:
            orthopedics();
            break;
        case 3:
            neurology();
            break;
        case 4:
            gastroenterology();
            break;
        case 5:
            dermatology();
            break;
        case 6:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void cardiology() {
    int choice;
    cout << "\n--- Cardiology ---" << endl;
    cout << "1. Heart Surgery\n";
    cout << "2. Angioplasty\n";
    cout << "3. Pacemaker Implantation\n";
    cout << "4. Back\n";
 cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nHeart Surgery: Surgical procedures to treat heart conditions such as bypass surgery.\n";
            break;
        case 2:
            cout << "\nAngioplasty: Procedure to open blocked heart arteries using a balloon.\n";
            break;
        case 3:
            cout << "\nPacemaker Implantation: Implantation of a device to regulate heart rhythm.\n";
            break;
        case 4:
            cout << "Returning to Hospital Specialties...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void orthopedics() {
    int choice;
    cout << "\n--- Orthopedics ---" << endl;
    cout << "1. Joint Replacement Surgery\n";
    cout << "2. Spine Surgery\n";
    cout << "3. Fracture Treatment\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nJoint Replacement Surgery: Procedure to replace damaged joints, such as hip or knee replacements.\n";
            break;
        case 2:
            cout << "\nSpine Surgery: Surgical treatment for spine-related issues like herniated discs.\n";
            break;
        case 3:
            cout << "\nFracture Treatment: Casting, splinting, or surgery to treat broken bones.\n";
            break;
        case 4:
            cout << "Returning to Hospital Specialties...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void neurology() {
    int choice;
    cout << "\n--- Neurology ---" << endl;
    cout << "1. Brain Surgery\n";
    cout << "2. Stroke Rehabilitation\n";
    cout << "3. Epilepsy Treatment\n";
    cout << "4. Back\n";
  cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nBrain Surgery: Surgical interventions for conditions like tumors or aneurysms in the brain.\n";
            break;
        case 2:
            cout << "\nStroke Rehabilitation: Therapy to help patients recover from strokes and regain functionality.\n";
            break;
        case 3:
            cout << "\nEpilepsy Treatment: Medications and surgical options to manage seizures caused by epilepsy.\n";
            break;
        case 4:
            cout << "Returning to Hospital Specialties...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void gastroenterology() {
    int choice;
    cout << "\n--- Gastroenterology ---" << endl;
    cout << "1. Endoscopy\n";
    cout << "2. Colonoscopy\n";
    cout << "3. Liver Disease Treatment\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nEndoscopy: Procedure to examine the digestive tract using a flexible tube with a camera.\n";
            break;
        case 2:
            cout << "\nColonoscopy: Procedure to check for colon cancer or other gastrointestinal issues.\n";
            break;
        case 3:
            cout << "\nLiver Disease Treatment: Treatments for liver conditions like hepatitis or cirrhosis.\n";
            break;
        case 4:
            cout << "Returning to Hospital Specialties...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

// Insertion Sort function to sort the list of dermatology treatments
void insertionSort(vector<string>& treatments) {
    int n = treatments.size();
    for (int i = 1; i < n; i++) {
        string key = treatments[i];
        int j = i - 1;

        // Move elements of treatments[0..i-1] that are greater than key
        while (j >= 0 && treatments[j] > key) {
            treatments[j + 1] = treatments[j];
            j = j - 1;
        }
        treatments[j + 1] = key;
    }
}

// Linear Search function to search for a specific treatment
int LinearSearch(const vector<string>& treatments, const string& searchTerm) {
    for (int i = 0; i < treatments.size(); i++) {
        if (treatments[i] == searchTerm) {
            return i; // Return the index if the treatment is found
        }
    }
    return -1; // Return -1 if the treatment is not found
}

void dermatology() {
    int choice;
    cout << "\n--- Dermatology ---" << endl;
    cout << "1. Skin Cancer Treatment\n";
    cout << "2. Acne Treatment\n";
    cout << "3. Psoriasis Care\n";
    cout << "4. Search for Treatments\n";
    cout << "5. Back\n";
    cout << "==========================================" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "------------------------------------------" << endl;

    switch (choice) {
        case 1:
            cout << "\nSkin Cancer Treatment: Surgical and non-surgical methods to treat skin cancers such as melanoma.\n";
            break;
        case 2:
            cout << "\nAcne Treatment: Various treatments including topical creams, medications, and laser therapy.\n";
            break;
        case 3:
            cout << "\nPsoriasis Care: Treatments for psoriasis including topical treatments and phototherapy.\n";
            break;
        case 4:
            {
                // Predefined list of dermatology treatments
                vector<string> treatments = {
                    "Skin Cancer Treatment", "Acne Treatment", "Psoriasis Care"
                };

                // Sort the treatments list using Insertion Sort
                insertionSort(treatments);

                // Display the sorted list of treatments
                cout << "\nAvailable Dermatology Treatments (sorted):\n";
                for (const string& treatment : treatments) {
                    cout << "- " << treatment << endl;
                }

                // Search for a specific treatment using Linear Search
                cout << "\nEnter the treatment name you're looking for: ";
                string searchTerm;
                cin.ignore(); // To clear the input buffer
                getline(cin, searchTerm); // Read the full treatment name

                // Perform linear search to find the treatment
                int index = LinearSearch(treatments, searchTerm);

                if (index != -1) {
                    cout << "Treatment found at index " << index << ": " << treatments[index] << endl;
                } else {
                    cout << "Treatment not found.\n";
                }
            }
            break;
        case 5:
            cout << "Returning to Hospital Specialties...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void hospitalServices() {
    int choice;
    cout << "\n--- Hospital Services ---" << endl;
    cout << "1. Outpatient Services\n";
    cout << "2. Inpatient Services\n";
    cout << "3. Emergency Services\n";
    cout << "4. Back\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            outpatientServices();
            break;
        case 2:
            inpatientServices();
            break;
        case 3:
            emergencyServices();
            break;
        case 4:
            cout << "Returning to Private Hospitals...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

// Function definition for outpatient services
void outpatientServices() {
    int choice;
    cout << "\n--- Outpatient Services ---" << endl;
    cout << "1. Consultation Services\n";
    cout << "2. Diagnostic Tests\n";
    cout << "3. Minor Treatments\n";
    cout << "4. Emergency Consultations\n";
    cout << "5. Follow-Up Consultations\n";
    cout << "6. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            consultationServices();
            break;
        case 2:
            diagnosticTests();
            break;
        case 3:
            minorTreatments();
            break;
        case 4:
            emergencyConsultations();
            break;
        case 5:
            followUpConsultations();
            break;
        case 6:
            cout << "Returning to previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

// Bubble Sort function to sort the list of consultation services
void bubbleSort(vector<string>& services) {
    int n = services.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (services[j] > services[j + 1]) {
                swap(services[j], services[j + 1]); // Swap if elements are in wrong order
            }
        }
    }
}

// Binary Search function to find a specific service in the sorted list
int BinarySearch(const vector<string>& services, const string& searchTerm) {
    int left = 0;
    int right = services.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if searchTerm is present at mid
        if (services[mid] == searchTerm) {
            return mid; // Return index if found
        }
        // If searchTerm is greater, ignore left half
        if (services[mid] < searchTerm) {
            left = mid + 1;
        }
        // If searchTerm is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }
    return -1; // Return -1 if not found
}

void consultationServices() {
    int choice;
    cout << "\n--- Consultation Services ---" << endl;
    cout << "1. General Consultation\n";
    cout << "2. Specialist Consultation\n";
    cout << "3. Virtual Consultation\n";
    cout << "4. Search for Consultation Services\n";
    cout << "5. Back\n";
    cout << "==========================================" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "------------------------------------------" << endl;

    switch (choice) {
        case 1:
            cout << "\nGeneral Consultation: Meet with a primary care doctor for routine checkups.\n";
            break;
        case 2:
            cout << "\nSpecialist Consultation: Meet with a doctor specialized in a particular field (e.g., cardiology, dermatology).\n";
            break;
        case 3:
            cout << "\nVirtual Consultation: Consult a doctor remotely using telemedicine services.\n";
            break;
        case 4:
            {
                // Predefined list of consultation services
                vector<string> services = {
                    "General Consultation", "Specialist Consultation", "Virtual Consultation"
                };

                // Sort the consultation services list using Bubble Sort
                bubbleSort(services);

                // Display the sorted list of services
                cout << "\nAvailable Consultation Services (sorted):\n";
                for (const string& service : services) {
                    cout << "- " << service << endl;
                }

                // Search for a specific consultation service using Binary Search
                cout << "\nEnter the consultation service you're looking for: ";
                string searchTerm;
                cin.ignore(); // To clear the input buffer
                getline(cin, searchTerm); // Read the full service name

                // Perform binary search to find the service
                int index = BinarySearch(services, searchTerm);

                if (index != -1) {
                    cout << "Service found at index " << index << ": " << services[index] << endl;
                } else {
                    cout << "Service not found.\n";
                }
            }
            break;
        case 5:
            cout << "Returning to Outpatient Services...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}


void diagnosticTests() {
    int choice;
    cout << "\n--- Diagnostic Tests ---" << endl;
    cout << "1. Blood Tests\n";
    cout << "2. Imaging (X-rays, Ultrasounds)\n";
    cout << "3. ECG/EKG Tests\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nBlood Tests: Includes various tests like CBC, liver function, kidney function, etc.\n";
            break;
        case 2:
            cout << "\nImaging: X-rays, ultrasounds, CT scans, and MRIs for diagnostics.\n";
            break;
        case 3:
            cout << "\nECG/EKG Tests: Electrocardiogram to check heart function and rhythms.\n";
            break;
        case 4:
            cout << "Returning to Outpatient Services...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void minorTreatments() {
    int choice;
    cout << "\n--- Minor Treatments ---" << endl;
    cout << "1. Wound Care\n";
    cout << "2. Vaccination\n";
    cout << "3. Pain Management\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nWound Care: Dressing and cleaning of small cuts, burns, and abrasions.\n";
            break;
        case 2:
            cout << "\nVaccination: Administration of routine vaccines, including flu, tetanus, and others.\n";
            break;
        case 3:
            cout << "\nPain Management: Minor pain relief medications for headaches, sprains, etc.\n";
            break;
        case 4:
            cout << "Returning to Outpatient Services...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void emergencyConsultations() {
    cout << "\nEmergency Consultations: Immediate consultations for urgent conditions.\n";
    cout << "Available 24/7 at the emergency department.\n";
}

void followUpConsultations() {
    cout << "\nFollow-Up Consultations: Appointments after initial treatment or surgery to monitor recovery.\n";
}

// Function definition for inpatient services
void inpatientServices() {
    int choice;
    cout << "\n--- Inpatient Services ---" << endl;
    cout << "1. Surgeries\n";
    cout << "2. Long-Term Treatment\n";
    cout << "3. Hospitalization\n";
    cout << "4. Post-Surgery Care\n";
    cout << "5. Special Care Units\n";
    cout << "6. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            surgeries();
            break;
        case 2:
            longTermTreatment();
            break;
        case 3:
            hospitalization();
            break;
        case 4:
            postSurgeryCare();
            break;
        case 5:
            specialCareUnits();
            break;
        case 6:
            cout << "Returning to previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void surgeries() {
    int choice;
    cout << "\n--- Surgeries ---" << endl;
    cout << "1. Elective Surgery\n";
    cout << "2. Emergency Surgery\n";
    cout << "3. Minimally Invasive Surgery\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nElective Surgery: Non-emergency surgeries that are scheduled in advance.\n";
            break;
        case 2:
            cout << "\nEmergency Surgery: Surgeries needed in urgent situations (e.g., trauma, appendicitis).\n";
            break;
        case 3:
            cout << "\nMinimally Invasive Surgery: Laparoscopic or robotic surgeries that require smaller incisions.\n";
            break;
        case 4:
            cout << "Returning to Inpatient Services...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void longTermTreatment() {
    cout << "\nLong-Term Treatment: Ongoing medical care for chronic conditions such as cancer or diabetes.\n";
}

void hospitalization() {
    cout << "\nHospitalization: Admission to the hospital for overnight stays or longer based on medical needs.\n";
}

void postSurgeryCare() {
    cout << "\nPost-Surgery Care: Ongoing care to monitor recovery, manage pain, and prevent complications.\n";
}

void specialCareUnits() {
    int choice;
    cout << "\n--- Special Care Units ---" << endl;
    cout << "1. Intensive Care Unit (ICU)\n";
    cout << "2. Neonatal Intensive Care Unit (NICU)\n";
    cout << "3. Cardiac Care Unit (CCU)\n";
    cout << "4. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nICU: Provides advanced care for critically ill patients requiring constant monitoring.\n";
            break;
        case 2:
            cout << "\nNICU: Specialized care for newborns who are premature or have health issues.\n";
            break;
        case 3:
            cout << "\nCCU: Specialized care for patients with serious heart conditions.\n";
            break;
        case 4:
            cout << "Returning to Inpatient Services...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void emergencyServices() {
    int choice;
    cout << "\n--- Emergency Services ---" << endl;
    cout << "1. Accident Care\n";
    cout << "2. Heart Attack Care\n";
    cout << "3. Stroke Care\n";
    cout << "4. Critical Care\n";
    cout << "5. Emergency Helpline\n";
    cout << "6. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            accidentCare();
            break;
        case 2:
            heartAttackCare();
            break;
        case 3:
            strokeCare();
            break;
        case 4:
            criticalCare();
            break;
        case 5:
            emergencyHelpline();
            break;
        case 6:
            cout << "Returning to previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void accidentCare() {
    int choice;
    cout << "\n--- Accident Care ---" << endl;
    cout << "1. First Aid for Injuries\n";
    cout << "2. Emergency Transport\n";
    cout << "3. Hospital Emergency Rooms\n";
    cout << "4. Back\n";
  cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nFirst Aid for Injuries: Apply pressure to bleeding wounds, immobilize fractures, and call for help.\n";
            break;
        case 2:
            cout << "\nEmergency Transport: Ambulance services provide urgent transport to hospitals.\n";
            break;
        case 3:
            cout << "\nHospital Emergency Rooms: Immediate care at nearby hospital emergency departments.\n";
            break;
        case 4:
            cout << "Returning to Emergency Services...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void heartAttackCare() {
    int choice;
    cout << "\n--- Heart Attack Care ---" << endl;
    cout << "1. Symptoms of Heart Attack\n";
    cout << "2. First Aid for Heart Attack\n";
    cout << "3. Emergency Transport to Hospital\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nSymptoms: Chest pain, shortness of breath, pain radiating to left arm.\n";
            break;
        case 2:
            cout << "\nFirst Aid: Keep the person calm, offer aspirin if conscious, and call 911 immediately.\n";
            break;
        case 3:
            cout << "\nTransport: Ambulance services are available 24/7 for heart attack emergencies.\n";
            break;
        case 4:
            cout << "Returning to Emergency Services...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void strokeCare() {
    int choice;
    cout << "\n--- Stroke Care ---" << endl;
    cout << "1. Symptoms of Stroke\n";
    cout << "2. First Aid for Stroke\n";
    cout << "3. Emergency Transport to Stroke Unit\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nSymptoms: Sudden numbness, confusion, difficulty speaking, or loss of vision.\n";
            break;
        case 2:
            cout << "\nFirst Aid: Call 911 immediately, keep the person calm, and note the time of onset of symptoms.\n";
            break;
        case 3:
            cout << "\nTransport: Stroke patients should be transported to a specialized stroke unit for immediate care.\n";
            break;
        case 4:
            cout << "Returning to Emergency Services...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void criticalCare() {
    int choice;
    cout << "\n--- Critical Care ---" << endl;
    cout << "1. Intensive Care Units (ICU)\n";
    cout << "2. Life Support Services\n";
    cout << "3. Organ Transplants\n";
    cout << "4. Back\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nICU: Provides specialized care for patients with life-threatening conditions.\n";
            break;
        case 2:
            cout << "\nLife Support: Services like mechanical ventilation for breathing or heart support.\n";
            break;
        case 3:
            cout << "\nOrgan Transplants: Immediate care provided to patients awaiting or receiving organ transplants.\n";
            break;
        case 4:
            cout << "Returning to Emergency Services...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void emergencyHelpline() {
    cout << "\nEmergency Helpline: Call 911 (or local emergency number) for immediate assistance in critical situations.\n";
}

void ngoPartnerships() {
    int choice;
    cout << "\n--- NGO Partnerships ---" << endl;
    cout << "1. NGO Details\n";
    cout << "2. Subsidized Treatment\n";
    cout << "3. Low-Cost Medications\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            ngoDetails();
            break;
        case 2:
            subsidizedTreatment();
            break;
        case 3:
            lowCostMedications();
            break;
        case 4:
            cout << "Returning to Private Hospitals...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void ngoDetails() {
    cout << "\nNGO Details: NGOs like the Smile Foundation and Doctors Without Borders collaborate with private hospitals to provide subsidized treatments.\n";
}

void subsidizedTreatment() {
    cout << "\nSubsidized Treatment: Many private hospitals have tie-ups with NGOs to offer treatments at a reduced cost for underprivileged communities.\n";
}

void lowCostMedications() {
    cout << "\nLow-Cost Medications: NGOs also provide medications at subsidized rates or free of charge through partnerships with pharmaceutical companies.\n";
}

void contactNGOs() {
    cout << "\nContact NGOs: For more details about low-cost treatments or health programs, contact local NGOs such as Smile Foundation or Arogya Foundation.\n";
}
void specializedCenters() {
    int choice;
    cout << "\n--- Specialized Centers ---" << endl;
    cout << "1. Tuberculosis Centers\n";
    cout << "2. Malaria Centers\n";
    cout << "3. HIV Treatment Centers\n";
    cout << "4. Contact District Health Office\n";
    cout << "5. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            tuberculosisCenters();
            break;
        case 2:
            malariaCenters();
            break;
        case 3:
            hivTreatmentCenters();
            break;
        case 4:
            contactDistrictHealthOffice();
            break;
        case 5:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void tuberculosisCenters() {
    int choice;
    cout << "\n--- Tuberculosis Centers ---" << endl;
    cout << "1. Tuberculosis Details\n";
    cout << "2. Tuberculosis Treatment\n";
    cout << "3. Tuberculosis Prevention\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            tuberculosisDetails();
            break;
        case 2:
            tuberculosisTreatment();
            break;
        case 3:
            tuberculosisPrevention();
            break;
        case 4:
            cout << "Returning to Specialized Centers...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void tuberculosisDetails() {
    cout << "\nTuberculosis Details: Tuberculosis (TB) is a serious bacterial infection that mainly affects the lungs. It can spread to other parts of the body.\n";
}

void tuberculosisTreatment() {
    cout << "\nTuberculosis Treatment: TB is treated with a combination of antibiotics over a long period (usually 6-9 months).\n";
}

void tuberculosisPrevention() {
    cout << "\nTuberculosis Prevention: TB is preventable through vaccination (BCG vaccine) and by ensuring early detection and treatment.\n";
}

void malariaCenters() {
    int choice;
    cout << "\n--- Malaria Centers ---" << endl;
    cout << "1. Malaria Details\n";
    cout << "2. Malaria Treatment\n";
    cout << "3. Malaria Prevention\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            malariaDetails();
            break;
        case 2:
            malariaTreatment();
            break;
        case 3:
            malariaPrevention();
            break;
        case 4:
            cout << "Returning to Specialized Centers...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void malariaDetails() {
    cout << "\nMalaria Details: Malaria is caused by parasites transmitted through the bites of infected mosquitoes. It causes fever, chills, and flu-like symptoms.\n";
}

void malariaTreatment() {
    cout << "\nMalaria Treatment: Malaria can be treated with antimalarial drugs such as chloroquine and artemisinin-based combination therapies (ACTs).\n";
}

void malariaPrevention() {
    cout << "\nMalaria Prevention: Malaria can be prevented by using insect repellent, sleeping under insecticide-treated bed nets, and taking antimalarial drugs.\n";
}

void hivTreatmentCenters() {
    int choice;
    cout << "\n--- HIV Treatment Centers ---" << endl;
    cout << "1. HIV Details\n";
    cout << "2. HIV Treatment\n";
    cout << "3. HIV Prevention\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            hivDetails();
            break;
        case 2:
            hivTreatment();
            break;
        case 3:
            hivPrevention();
            break;
        case 4:
            cout << "Returning to Specialized Centers...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void hivDetails() {
    cout<<"HIV is a desease"<<endl;
}
void hivTreatment() {
    cout << "\nHIV Treatment: HIV is treated with antiretroviral therapy (ART) that helps manage the virus and prevent its progression to AIDS.\n";
}

void hivPrevention() {
    cout << "\nHIV Prevention: HIV can be prevented by using condoms, taking PrEP (Pre-exposure Prophylaxis), and ensuring safe needle practices.\n";
}

void contactDistrictHealthOffice() {
    cout << "\nContact District Health Office: For more information, you can contact your local district health office or visit their website for guidance on specialized centers and treatments.\n";
}

void ambulanceServices() {
    int choice;
    cout << "\n--- Ambulance Services ---" << endl;
    cout << "1. Emergency Ambulance\n";
    cout << "2. Non-Emergency Ambulance\n";
    cout << "3. Ambulance Helpline\n";
    cout << "4. Ambulance Booking Process\n";
    cout << "5. Ambulance Availability\n";
    cout << "6. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            emergencyAmbulance();
            break;
        case 2:
            nonEmergencyAmbulance();
            break;
        case 3:
            ambulanceHelpline();
            break;
        case 4:
            ambulanceBookingProcess();
            break;
        case 5:
            ambulanceAvailability();
            break;
        case 6:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void emergencyAmbulance() {
    int choice;
    cout << "\n--- Emergency Ambulance ---" << endl;
    cout << "1. Ambulance Details\n";
    cout << "2. Response Time\n";
    cout << "3. Ambulance Cost\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            emergencyAmbulanceDetails();
            break;
        case 2:
            emergencyAmbulanceResponse();
            break;
        case 3:
            emergencyAmbulanceCost();
            break;
        case 4:
            cout << "Returning to Ambulance Services...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void emergencyAmbulanceDetails() {
    cout << "\nEmergency Ambulance Details: These ambulances are equipped with life-saving medical equipment, and the paramedics are trained for critical care.\n";
}

void emergencyAmbulanceResponse() {
    cout << "\nResponse Time: Emergency ambulances typically respond within 10-15 minutes depending on the location and traffic conditions.\n";
}

void emergencyAmbulanceCost() {
    cout << "\nCost: Emergency ambulance services are often free of charge if provided by the government, but charges may apply in private setups.\n";
}

void nonEmergencyAmbulance() {
    int choice;
    cout << "\n--- Non-Emergency Ambulance ---" << endl;
    cout << "1. Ambulance Details\n";
    cout << "2. Booking Process\n";
    cout << "3. Ambulance Cost\n";
    cout << "4. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            nonEmergencyAmbulanceDetails();
            break;
        case 2:
            nonEmergencyAmbulanceBooking();
            break;
        case 3:
            nonEmergencyAmbulanceCost();
            break;
        case 4:
            cout << "Returning to Ambulance Services...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void nonEmergencyAmbulanceDetails() {
    cout << "\nNon-Emergency Ambulance Details: These ambulances are typically used for non-urgent transport, such as transferring patients between hospitals or to medical appointments.\n";
}

void nonEmergencyAmbulanceBooking() {
    cout << "\nBooking Process: Call the ambulance service or use an online platform to book a non-emergency ambulance. Provide your details, including pick-up location and destination.\n";
}

void nonEmergencyAmbulanceCost() {
    cout << "\nCost: The cost of non-emergency ambulance services can vary depending on distance, the type of ambulance, and the service provider.\n";
}

void ambulanceHelpline() {
    int choice;
    cout << "\n--- Ambulance Helpline ---" << endl;
    cout << "1. Helpline Details\n";
    cout << "2. How to Call Helpline\n";
    cout << "3. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            ambulanceHelplineDetails();
            break;
        case 2:
            ambulanceHelplineCall();
            break;
        case 3:
            cout << "Returning to Ambulance Services...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void ambulanceHelplineDetails() {
    cout << "\nHelpline Details: The ambulance helpline number is 108 in many regions. This number is available 24/7 for emergency services.\n";
}

void ambulanceHelplineCall() {
    cout << "\nTo call the ambulance helpline, simply dial 108 on your phone and follow the instructions.\n";
}

void ambulanceBookingProcess() {
    int choice;
    cout << "\n--- Ambulance Booking Process ---" << endl;
    cout << "1. Booking Steps\n";
    cout << "2. Payment Options\n";
    cout << "3. Booking Confirmation\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            ambulanceBookingSteps();
            break;
        case 2:
            ambulanceBookingPayment();
            break;
        case 3:
            ambulanceBookingConfirmation();
            break;
        case 4:
            cout << "Returning to Ambulance Services...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void ambulanceBookingSteps() {
    cout << "\nBooking Steps: First, call the service number or use the mobile app. Provide necessary details like pick-up location, patient details, and type of ambulance.\n";
}

void ambulanceBookingPayment() {
    cout << "\nPayment Options: Payments can be made via cash or card. Some services may also allow online payments or mobile wallet options.\n";
}

void ambulanceBookingConfirmation() {
    cout << "\nBooking Confirmation: After booking, you will receive a confirmation number. Ensure that you receive all necessary details, such as the expected arrival time of the ambulance.\n";
}

void ambulanceAvailability() {
    int choice;
    cout << "\n--- Ambulance Availability ---" << endl;
    cout << "1. Check Availability\n";
    cout << "2. Availability by Region\n";
    cout << "3. Back\n";
  cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;
    switch (choice) {
        case 1:
            ambulanceAvailabilityCheck();
            break;
        case 2:
            ambulanceAvailabilityRegions();
            break;
        case 3:
            cout << "Returning to Ambulance Services...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void ambulanceAvailabilityCheck() {
    cout << "\nCheck Availability: You can check ambulance availability by calling the service provider or using the relevant mobile app.\n";
}

void ambulanceAvailabilityRegions() {
    cout << "\nAvailability by Region: Availability can vary by region, with more ambulances generally available in urban areas than in rural ones.\n";
}


void houseAllotment() {
    int choice;
    do {
        cout << "\n=== House Allotment Module ===" << endl;
        cout << "1. Apply for Government Housing Scheme\n";
        cout << "2. Check Eligibility Criteria\n";
        cout << "3. Track Application Status\n";
        cout << "4. Access Financial Aid\n";
        cout << "5. Nearby Housing Projects\n";
       cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                applyForHousingScheme();
                break;
            case 2:
                checkEligibilityCriteria();
                break;
            case 3:
                trackApplicationStatus();
                break;
            case 4:
                accessFinancialAid();
                break;
            case 5:
                nearbyHousingProjects();
                break;
            case 6:
                cout << "Returning to the main menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 6);
}

void applyForHousingScheme() {
    int choice;
    cout << "\n--- Apply for Government Housing Scheme ---" << endl;
    cout << "1. Pradhan Mantri Awas Yojana (PMAY)\n";
    cout << "2. State Housing Schemes\n";
    cout << "3. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            pmayApplicationDetails();
            break;
        case 2:
            stateHousingApplicationDetails();
            break;
        case 3:
            cout << "Returning to House Allotment Module...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void pmayApplicationDetails() {
    int choice;
    cout << "\n--- Pradhan Mantri Awas Yojana (PMAY) Application Details ---" << endl;
    cout << "1. Eligibility Details\n";
    cout << "2. Application Process\n";
    cout << "3. Documents Required\n";
    cout << "4. Back\n";
 cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            pmayEligibilityDetails();
            break;
        case 2:
            pmayApplicationProcess();
            break;
        case 3:
            pmayRequiredDocuments();
            break;
        case 4:
            cout << "Returning to House Allotment Module...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}


void generalEligibilityDetails() {
    cout << "\nPMAY General Eligibility Details:\n";
    cout << "- Eligibility: Economically Weaker Sections (EWS) and Low Income Groups (LIG).\n";
    cout << "- Family includes husband, wife, and unmarried children.\n";
}

void incomeLimitDetails() {
    cout << "\nPMAY Income Limit:\n";
    cout << "- Income Limit: Up to Rs. 6 lakh annually for EWS and LIG categories.\n";
}

void housingStatusDetails() {
    cout << "\nPMAY Housing Status Details:\n";
    cout << "- Must not own a pucca house anywhere in India.\n";
}

void familyDetails() {
    cout << "\nPMAY Family Details:\n";
    cout << "- Family includes husband, wife, and unmarried children.\n";
}

void pmayApplicationProcess() {
    int choice;
    cout << "\n--- PMAY Application Process ---" << endl;
    cout << "1. Overview of the PMAY Application Process\n";
    cout << "2. Step-by-Step Guide for Online Application\n";
    cout << "3. Step-by-Step Guide for Municipal Office Application\n";
    cout << "4. Documents Required for Submission\n";
    cout << "5. Eligibility Criteria for PMAY\n";
    cout << "6. Back\n";
  cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nPMAY Application Process Overview:\n";
            cout << "- Pradhan Mantri Awas Yojana (PMAY) is a flagship housing initiative by the Government of India aimed at providing affordable housing.\n";
            cout << "- Applications for PMAY can be made either online through pmaymis.gov.in or at municipal offices.\n";
            cout << "- Applicants need to provide personal information, family income details, and proof of residence.\n";
            cout << "- Once submitted, the application will be reviewed, and applicants will receive updates about their status.\n";
            break;
        case 2:
            cout << "\nStep-by-Step Guide for Online Application:\n";
            cout << "- Visit the official PMAY website: pmaymis.gov.in.\n";
            cout << "- Create a new account or log in if you already have one.\n";
            cout << "- Fill in the application form with details such as name, address, family details, and income details.\n";
            cout << "- Choose the appropriate category (EWS, LIG, MIG) based on your income group.\n";
            cout << "- Upload the required documents (Identity Proof, Income Certificate, Proof of Residence) as mentioned on the site.\n";
            cout << "- Submit the application form, and note the application ID for future reference and tracking.\n";
            cout << "- The website will give you a tracking number to follow the status of your application.\n";
            break;
        case 3:
            cout << "\nStep-by-Step Guide for Municipal Office Application:\n";
            cout << "- Visit the nearest municipal office or local housing authority.\n";
            cout << "- Request a PMAY application form from the counter.\n";
            cout << "- Fill out the application form manually, providing your personal information, family income details, and residential information.\n";
            cout << "- Submit all the required documents along with the filled-out form to the designated office staff.\n";
            cout << "- You will receive an acknowledgment receipt with an application ID.\n";
            cout << "- Keep the receipt safe, as it can be used to track the status of your application.\n";
            break;
        case 4:
            cout << "\nRequired Documents for PMAY Application:\n";

            cout << "- Income Certificate: This document proves your eligibility for the EWS or LIG category. It can be obtained from your local revenue department or certified authority.\n";
            cout << "- Proof of Residence: Submit any of the following documents to prove your address: Utility Bills (Electricity, Water), Ration Card, Bank Statement, or a signed letter from a local government body.\n";
            cout << "- Passport-sized Photograph: A recent passport-sized photo is also required for the application.\n";
            break;
        case 5:
            pmayEligibilityDetails();
            break;
        case 6:
            cout << "Returning to previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void pmayEligibilityDetails() {
    int choice;
    cout << "\n--- PMAY Eligibility Criteria ---\n";
    cout << "1. Eligibility for EWS (Economically Weaker Sections)\n";
    cout << "2. Eligibility for LIG (Low Income Group)\n";
    cout << "3. Eligibility for MIG (Middle Income Group)\n";
    cout << "4. General Eligibility Criteria\n";
    cout << "5. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nEligibility for EWS (Economically Weaker Sections):\n";
            cout << "- Annual household income should be up to Rs. 3 lakh.\n";
            cout << "- The family should not own a pucca house anywhere in India.\n";
            cout << "- The applicant should be from a disadvantaged social background and is in need of affordable housing.\n";
            break;
        case 2:
            cout << "\nEligibility for LIG (Low Income Group):\n";
            cout << "- Annual household income should be between Rs. 3 lakh and Rs. 6 lakh.\n";
            cout << "- The applicant should not own a pucca house anywhere in India.\n";
            cout << "- The family should consist of husband, wife, and unmarried children.\n";
            break;
        case 3:
            cout << "\nEligibility for MIG (Middle Income Group):\n";
            cout << "- The annual income of the family should be between Rs. 6 lakh and Rs. 18 lakh.\n";
            cout << "- This category is for applicants who do not fall into the EWS or LIG categories but still need affordable housing.\n";
            break;
        case 4:
            cout << "\nGeneral Eligibility Criteria:\n";
            cout << "- The applicant must be an Indian citizen.\n";
            cout << "- The applicant or their family should not own a pucca house.\n";
            cout << "- The family should consist of husband, wife, and unmarried children.\n";
            cout << "- The applicant should not have received assistance under previous government schemes.\n";
            break;
        case 5:
            cout << "Returning to previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void pmayRequiredDocuments() {
    int choice;
    cout << "\n--- Documents Required for PMAY Application ---" << endl;
    cout << "1. Identity Proof\n";
    cout << "2. Income Certificate\n";
    cout << "3. Proof of Residence\n";
    cout << "4. Passport-sized Photograph\n";
    cout << "5. Other Documents\n";
    cout << "6. Back\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nIdentity Proof Documents:\n";
            cout << "- You must provide one of the following valid identity proofs: Aadhaar Card, Passport, Voter ID, Ration Card, or Driver license.";
            cout << "- Make sure the identity document is clear, legible, and up-to-date.\n";
            break;
        case 2:
            cout << "\nIncome Certificate:\n";
            cout << "- The income certificate is a mandatory document that proves your eligibility for the EWS or LIG categories.\n";
            cout << "- It can be obtained from local government authorities or revenue officers.\n";
            cout << "- The income certificate should clearly indicate the annual income of the entire family.\n";
            break;
        case 3:
            cout << "\nProof of Residence:\n";
            cout << "- Proof of residence documents should be official and clearly show your current address.\n";
            cout << "- Some examples include Utility Bills (Electricity, Water), Bank Statements, or Ration Cards.\n";
            cout << "- Documents should be no older than 3 months.\n";
            break;
        case 4:
            cout << "\nPassport-sized Photograph:\n";
            cout << "- A recent passport-sized photograph is required to complete your application.\n";
            cout << "- Ensure that the photo is clear and of good quality, showing your face clearly.\n";
            break;
        case 5:
            cout << "\nOther Documents:\n";
            cout << "- Depending on your situation, you may be required to submit additional documents.\n";
            cout << "- These may include caste certificates (for reserved categories), disability certificates, etc.\n";
            break;
        case 6:
            cout << "Returning to previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}
void stateHousingApplicationDetails() {
    int choice;
    cout << "\n--- State Housing Schemes Application Details ---" << endl;
    cout << "1. Overview of State Housing Schemes\n";
    cout << "2. Application Process\n";
    cout << "3. Documents Required\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            stateHousingSchemesOverview();
            break;
        case 2:
            stateHousingApplicationProcess();
            break;
        case 3:
            stateHousingRequiredDocuments();
            break;
        case 4:
            cout << "Returning to House Allotment Module...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void stateHousingSchemesOverview() {
    int choice;
    cout << "\n--- State Housing Schemes Overview ---" << endl;
    cout << "1. MHADA (Maharashtra)\n";
    cout << "2. DDA (Delhi)\n";
    cout << "3. State-Specific Eligibility Criteria\n";
    cout << "4. Contact State Housing Board\n";
    cout << "5. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            mhadaOverview();
            break;
        case 2:
            ddaOverview();
            break;
        case 3:
            stateSpecificEligibility();
            break;
        case 4:
            stateHousingBoardContact();
            break;
        case 5:
            cout << "Returning to previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void mhadaOverview() {
    cout << "\nMHADA (Maharashtra) Overview:\n";
    cout << "- Maharashtra Housing and Area Development Authority (MHADA) offers affordable housing.\n";
    cout << "- Projects are available in major cities such as Mumbai, Pune, and Nagpur.\n";
    cout << "- Visit the official MHADA website for project details and availability.\n";
}

void ddaOverview() {
    cout << "\nDDA (Delhi) Overview:\n";
    cout << "- Delhi Development Authority (DDA) provides affordable housing schemes in Delhi.\n";
    cout << "- Projects range from low-cost flats to high-end properties.\n";
    cout << "- For project updates and availability, visit the official DDA website.\n";
}

void stateSpecificEligibility() {
    cout << "\nState-Specific Eligibility Criteria:\n";
    cout << "- Eligibility criteria vary from state to state.\n";
    cout << "- Common factors include income limits, residency requirements, and family size.\n";
    cout << "- Contact your state housing board for specific eligibility guidelines.\n";
}

void stateHousingBoardContact() {
    int choice;
    cout << "\nContact State Housing Board:\n";
    cout << "1. Overview of State Housing Board Contact\n";
    cout << "2. How to Reach Out to State Housing Board\n";
    cout << "3. Contact Information for State Housing Boards\n";
    cout << "4. Regional Offices and Their Role\n";
    cout << "5. Back\n";
 cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nOverview of State Housing Board Contact:\n";
            cout << "- State Housing Boards manage housing schemes, projects, and applications at the state level.\n";
            cout << "- They are responsible for coordinating housing development projects and providing assistance to eligible families.\n";
            cout << "- If you're looking for information on ongoing projects, eligibility, or application processes, contacting the State Housing Board is the best option.\n";
            break;
        case 2:
            cout << "\nHow to Reach Out to State Housing Board:\n";
            cout << "1. **Visit the Official Website**: Start by visiting the official website of your state's housing board.\n";
            cout << "2. **Use the Contact Us Section**: Most state housing boards have a 'Contact Us' section where you can find phone numbers, email addresses, and physical office locations.\n";
            cout << "3. **Call or Email**: Reach out to the provided contact details for specific inquiries about eligibility, project updates, and application forms.\n";
            cout << "4. **Visit the Office**: You can also visit the nearest office in person if you need immediate assistance.\n";
            break;
        case 3:
            cout << "\nContact Information for State Housing Boards:\n";
            cout << "- **Phone Numbers**: Look for the helpline numbers for the state housing board on their website. These numbers are usually toll-free or region-specific.\n";
            cout << "- **Email Addresses**: Most boards also provide dedicated email addresses where you can send queries regarding ongoing schemes or projects.\n";
            cout << "- **Social Media**: Some state housing boards may also have active social media profiles (on Facebook, Twitter, etc.) for updates and queries.\n";
            cout << "- **Physical Locations**: You may find the address of the central or regional offices on the official website, where you can inquire about current projects and documents needed for applications.\n";
            break;
        case 4:
            cout << "\nRegional Offices and Their Role:\n";
            cout << "- **Regional Offices**: Many states have regional offices spread across districts or cities to provide localized support.\n";
            cout << "- **Role of Regional Offices**: These offices handle applications, provide guidance on eligibility, and offer assistance in completing application forms.\n";
            cout << "- **In-Person Help**: Regional offices are ideal for applicants who require more hands-on assistance, such as document verification, status tracking, and further clarifications on state-specific policies.\n";
            break;
        case 5:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}


void stateHousingApplicationProcess() {
    cout << "\nState Housing Application Process:\n";
    cout << "1. Visit your state's housing board website for available schemes.\n";
    cout << "2. Fill in the online application form.\n";
    cout << "3. If required, visit the housing office for further steps.\n";
    cout << "4. Submit required documents for verification.\n";
}

void stateHousingRequiredDocuments() {
    cout << "\nState Housing Documents Required:\n";
    cout << "1. Identity Proof (Aadhaar, Passport, etc.).\n";
    cout << "2. Income Certificate (if required by your state).\n";
    cout << "3. Proof of Residence (Ration Card, Utility Bills, etc.).\n";
    cout << "4. Additional documents may be required by your state's housing board.\n";
}
void checkEligibilityCriteria() {
    int choice;
    cout << "\n--- Check Eligibility Criteria ---" << endl;
    cout << "1. Pradhan Mantri Awas Yojana\n";
    cout << "2. State Housing Boards\n";
    cout << "3. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            pmayEligibility();
            break;
        case 2:
            stateHousingEligibility();
            break;
        case 3:
            cout << "Returning to House Allotment Module...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void pmayEligibility() {
    int choice;
    cout << "\n--- Pradhan Mantri Awas Yojana Eligibility Details ---" << endl;
    cout << "1. Income Limit\n";
    cout << "2. Housing Status\n";
    cout << "3. Family Details\n";
    cout << "4. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            pmayIncomeLimit();
            break;
        case 2:
            pmayHousingStatus();
            break;
        case 3:
            pmayFamilyDetails();
            break;
        case 4:
            cout << "Returning to House Allotment Module...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void pmayIncomeLimit() {
    cout << "\nPMAY Income Limit Details:\n";
    cout << "- For Economically Weaker Sections (EWS) and Low Income Groups (LIG):\n";
    cout << "- Income limit: Up to Rs. 6 lakh annually.\n";
    cout << "- This limit is applicable for both urban and rural areas.\n";
}

void pmayHousingStatus() {
    cout << "\nPMAY Housing Status Details:\n";
    cout << "- The applicant must not own a pucca house anywhere in India.\n";
    cout << "- The house being applied for must be the first home for the applicant.\n";
    cout << "- This criterion is mandatory for the applicant's eligibility.\n";
}

void pmayFamilyDetails() {
    cout << "\nPMAY Family Details:\n";
    cout << "- A household includes the husband, wife, and unmarried children.\n";
    cout << "- Only one application per household is allowed.\n";
    cout << "- Family members must be living together as a unit.\n";
}

void stateHousingEligibility() {
    int choice;
    cout << "\n--- State Housing Eligibility Criteria ---" << endl;
    cout << "1. Overview of State Housing Criteria\n";
    cout << "2. Specific State Housing Criteria\n";
    cout << "3. Local Housing Board Regulations\n";
    cout << "4. Back\n";
  cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            stateHousingCriteriaOverview();
            break;
        case 2:
            stateHousingSpecificCriteria();
            break;
        case 3:
            stateHousingLocalRegulations();
            break;
        case 4:
            cout << "Returning to House Allotment Module...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void stateHousingCriteriaOverview() {
    int choice;
    cout << "\nState Housing Criteria Overview:\n";
    cout << "1. Overview of Eligibility Criteria\n";
    cout << "2. Factors Affecting State Housing Eligibility\n";
    cout << "3. How to Check State Housing Criteria\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nOverview of Eligibility Criteria:\n";
            cout << "- Eligibility criteria for state housing schemes can vary depending on factors like income, family size, and residency.\n";
            cout << "- These schemes are tailored to meet the specific needs of the state's population, including economically weaker sections (EWS), low-income groups (LIG), and other priority groups.\n";
            cout << "- Different states may have different rules for eligibility, and certain housing projects may have unique criteria based on local development plans.\n";
            break;
        case 2:
            cout << "\nFactors Affecting State Housing Eligibility:\n";
            cout << "- **Income Limits**: Most states have income-based eligibility. Low-income groups (LIG) and economically weaker sections (EWS) are often prioritized.\n";
            cout << "- **Residency Status**: Some states may prioritize residents or those with a long-term presence in the state.\n";
            cout << "- **Family Size**: Housing schemes may consider family size when determining eligibility, offering larger houses to bigger families.\n";
            cout << "- **Special Categories**: Certain schemes may give preference to government employees, senior citizens, or persons with disabilities.\n";
            break;
        case 3:
            cout << "\nHow to Check State Housing Criteria:\n";
            cout << "- **Visit the State Housing Board Website**: Most state housing boards publish their eligibility criteria online, which you can check by visiting their official websites.\n";
            cout << "- **Contact Local Offices**: For more detailed and region-specific information, it best to contact local housing offices or municipal corporations.\n";
            cout << "- **Consult Local Authorities**: Local authorities can provide additional information about any changes in the criteria, and they may also offer assistance in understanding the requirements.\n";
            break;
        case 4:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void stateHousingSpecificCriteria() {
    int choice;
    cout << "\nState Housing Specific Criteria:\n";
    cout << "1. Housing for Economically Weaker Sections (EWS)\n";
    cout << "2. Housing for Senior Citizens and Government Employees\n";
    cout << "3. Housing Prioritization Based on Region\n";
    cout << "4. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nHousing for Economically Weaker Sections (EWS):\n";
            cout << "- Many states offer housing specifically for EWS, often at a lower cost or with subsidies.\n";
            cout << "- These projects aim to provide affordable homes for families that fall below a specific income threshold.\n";
            cout << "- EWS housing is typically prioritized for those without any permanent residence or those living in informal settlements.\n";
            break;
        case 2:
            cout << "\nHousing for Senior Citizens and Government Employees:\n";
            cout << "- Certain states provide special housing schemes for senior citizens, offering priority or subsidized housing.\n";
            cout << "- Some states also have housing schemes that prioritize government employees, offering them lower prices or better locations.\n";
            cout << "- These schemes ensure that people in vulnerable or essential service categories are catered to in housing projects.\n";
            break;
        case 3:
            cout << "\nHousing Prioritization Based on Region:\n";
            cout << "- In some states, housing may be prioritized based on specific regions or areas facing housing shortages.\n";
            cout << "- Regional housing boards may have their own set of criteria to determine who gets priority for housing projects.\n";
            cout << "- Local governments may also prioritize certain areas for redevelopment or new housing projects based on the local development plan.\n";
            break;
        case 4:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void stateHousingLocalRegulations() {
    int choice;
    cout << "\nState Housing Local Regulations:\n";
    cout << "1. Overview of Local Regulations\n";
    cout << "2. Income Limits and Residency Requirements\n";
    cout << "3. Local Development Plans and Housing Allocation\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nOverview of Local Regulations:\n";
            cout << "- Local housing regulations typically include requirements for residency, income levels, and family size.\n";
            cout << "- Some areas may have additional requirements, such as living in the region for a certain number of years or being a local taxpayer.\n";
            cout << "- Understanding local regulations is crucial to determine your eligibility for housing schemes and ensure that you meet all the requirements for your area.\n";
            break;
        case 2:
            cout << "\nIncome Limits and Residency Requirements:\n";
            cout << "- Income limits are often based on the average income of the local population. States may apply different limits depending on the city or region.\n";
            cout << "- Residency requirements are typically enforced to ensure that housing schemes benefit local residents first, though some areas may allow migrants or temporary workers to apply.\n";
            cout << "- Verify your eligibility with the local housing authority before applying to ensure that you meet the required criteria.\n";
            break;
        case 3:
            cout << "\nLocal Development Plans and Housing Allocation:\n";
            cout << "- Local development plans often influence where and how housing projects are developed. Areas with the highest need may receive more attention.\n";
            cout << "- Housing allocation may depend on regional priorities, such as low-income families or those displaced by redevelopment projects.\n";
            cout << "- Some local regulations may give priority to families residing in slum areas or those requiring urgent relocation.\n";
            break;
        case 4:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}


void trackApplicationStatus() {
    int choice;
    cout << "\n--- Track Application Status ---" << endl;
    cout << "1. Pradhan Mantri Awas Yojana\n";
    cout << "2. State Housing Schemes\n";
    cout << "3. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            pmayTrackStatus();
            break;
        case 2:
            stateHousingTrackStatus();
            break;
        case 3:
            cout << "Returning to House Allotment Module...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void pmayTrackStatus() {
    int choice;
    cout << "\n--- Track PMAY Application Status ---" << endl;
    cout << "1. Online Tracking\n";
    cout << "2. Municipal Office Tracking\n";
    cout << "3. Back\n";
  cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            pmayOnlineTracking();
            break;
        case 2:
            pmayMunicipalOfficeTracking();
            break;
        case 3:
            cout << "Returning to House Allotment Module...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void pmayOnlineTracking() {
    int choice;
    cout << "\nPMAY Application Status Tracking (Online):\n";
    cout << "1. Overview of Online Tracking Process\n";
    cout << "2. Steps to Check Status Online\n";
    cout << "3. Required Details for Online Tracking\n";
    cout << "4. Troubleshooting Common Issues\n";
    cout << "5. Back\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nOverview of Online Tracking Process:\n";
            cout << "- The Pradhan Mantri Awas Yojana (PMAY) offers an online tracking system to help applicants check the status of their applications.\n";
            cout << "- This system is accessible 24/7, ensuring applicants can monitor their application progress at any time.\n";
            cout << "- The process is simple and allows you to track application status from submission to approval and disbursement stages.\n";
            break;
        case 2:
            cout << "\nSteps to Check Status Online:\n";
            cout << "1. **Go to the PMAY Official Website**: Open the website pmaymis.gov.in on any browser.\n";
            cout << "2. **Navigate to the Application Status Section**: Look for the 'Track Application Status' section on the homepage.\n";
            cout << "3. **Enter Your Application ID**: Find the field where you can input your unique application ID.\n";
            cout << "4. **Submit the Information**: Click on the 'Submit' button to check the status of your application.\n";
            cout << "5. **View the Status**: The website will display real-time information about your application current stage.\n";
            break;
        case 3:
            cout << "\nRequired Details for Online Tracking:\n";
            cout << "- **Application ID**: This is the most important detail that you need to track the status of your PMAY application.\n";
            cout << "- **Personal Information**: You may also need to enter your name, contact details, or other personal information to verify your identity.\n";
            cout << "- **Document Details**: Ensure that the documents you submitted during the application process are properly linked to your profile.\n";
            break;
        case 4:
            cout << "\nTroubleshooting Common Issues:\n";
            cout << "- **Invalid Application ID**: Double-check your application ID to ensure it is correctly entered without any spaces or errors.\n";
            cout << "- **Website Not Loading**: If the website is temporarily down or not loading, check your internet connection or try again later.\n";
            cout << "- **Status Not Updated**: If the status is not updated or is missing, contact the PMAY support team or visit the nearest municipal office for assistance.\n";
            break;
        case 5:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void pmayMunicipalOfficeTracking() {
    int choice;
    cout << "\nPMAY Application Status Tracking (Municipal Office):\n";
    cout << "1. Overview of Municipal Office Tracking\n";
    cout << "2. Steps to Check Status at Municipal Office\n";
    cout << "3. Required Documents for Municipal Office Tracking\n";
    cout << "4. Common Issues and Solutions\n";
    cout << "5. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nOverview of Municipal Office Tracking:\n";
            cout << "- Tracking your PMAY application at the nearest municipal office is another reliable way to monitor your application.\n";
            cout << "- The municipal office provides face-to-face interaction, which allows you to clarify doubts and receive status updates immediately.\n";
            cout << "- You will be assisted by municipal staff who can check your application details and update you on the progress.\n";
            break;
        case 2:
            cout << "\nSteps to Check Status at Municipal Office:\n";
            cout << "1. **Locate the Nearest Municipal Office**: Find the municipal office closest to your residence or the office where you submitted your application.\n";
            cout << "2. **Visit the Office**: Go to the office with all required documents, including your application ID and personal details.\n";
            cout << "3. **Request Application Status Update**: Approach the designated staff member to request the status of your PMAY application.\n";
            cout << "4. **Provide Necessary Documents**: Ensure you have the application ID, identity proof, and other supporting documents for verification.\n";
            cout << "5. **Receive Status Update**: The staff will provide you with the latest update on your application and inform you of any additional steps.\n";
            break;
        case 3:
            cout << "\nRequired Documents for Municipal Office Tracking:\n";
            cout << "- **Application ID**: Ensure you have the unique application ID issued at the time of submission.\n";
            cout << "- **Identity Proof**: Carry an identity document like Aadhaar, Passport, or Voter ID.\n";
            cout << "- **Supporting Documents**: Bring other necessary documents such as income certificates, proof of residence, and bank details.\n";
            break;
        case 4:
            cout << "\nCommon Issues and Solutions:\n";
            cout << "- **No Update Available**: If the office staff cannot provide an update, it may be due to system delays. You may need to check back later or escalate the issue.\n";
            cout << "- **Missing Documents**: Ensure that all required documents are available. If any documents are missing, make sure to bring them on your next visit.\n";
            cout << "- **Incorrect Application ID**: Double-check your application ID to ensure it is accurate. If necessary, request a reprint of the ID from the municipal office.\n";
            break;
        case 5:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}


void stateHousingTrackStatus() {
    int choice;
    cout << "\n--- Track State Housing Scheme Application Status ---" << endl;
    cout << "1. Online Tracking\n";
    cout << "2. Phone Tracking\n";
    cout << "3. Document Verification\n";
    cout << "4. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            stateHousingOnlineTracking();
            break;
        case 2:
            stateHousingPhoneTracking();
            break;
        case 3:
            stateHousingDocumentVerification();
            break;
        case 4:
            cout << "Returning to House Allotment Module...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void stateHousingOnlineTracking() {
    int choice;
    cout << "\nState Housing Scheme Application Status Tracking (Online):\n";
    cout << "1. Overview of Online Tracking Process\n";
    cout << "2. Steps to Check Status Online\n";
    cout << "3. Required Documents for Online Tracking\n";
    cout << "4. Troubleshooting Common Issues\n";
    cout << "5. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nOverview of Online Tracking Process:\n";
            cout << "- Online tracking allows you to check the status of your state housing application from the comfort of your home.\n";
            cout << "- You can access the respective state housing board official website and use their online tracking system.\n";
            cout << "- The status will be updated in real-time, so you can track your application progress at any time.\n";
            break;
        case 2:
            cout << "\nSteps to Check Status Online:\n";
            cout << "1. **Visit the State Housing Board Website**: Open the official website of your state's housing board.\n";
            cout << "2. **Navigate to the Application Status Section**: Look for a section labeled Application Status or Track Application.\n";
            cout << "3. **Enter Your Application ID**: Input your application ID in the provided field to begin tracking.\n";
            cout << "4. **Submit the Details**: Click on the Submit button to check the status.\n";
            cout << "5. **View the Status**: The system will display the current status of your application, including any next steps or further requirements.\n";
            break;
        case 3:
            cout << "\nRequired Documents for Online Tracking:\n";
            cout << "- **Application ID**: The most important detail needed to check your status.\n";
            cout << "- **Personal Identification**: Some systems may require additional personal details such as your name or contact number.\n";
            cout << "- **Supporting Documents**: Ensure that your documents, like proof of income, proof of address, etc., are already uploaded or linked with the application.\n";
            break;
        case 4:
            cout << "\nTroubleshooting Common Issues:\n";
            cout << "- **Invalid Application ID**: Double-check your application ID. Make sure it is correct and entered without any spaces or errors.\n";
            cout << "- **Website Downtime**: Sometimes, the website may be temporarily unavailable. Try accessing it later.\n";
            cout << "- **No Status Update**: If no update is available, it could be due to delays in the system. Contact the housing board for more details.\n";
            break;
        case 5:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}


void stateHousingPhoneTracking() {
    int choice;
    cout << "\nState Housing Scheme Application Status Tracking (Phone):\n";
    cout << "1. Overview of Phone Tracking Process\n";
    cout << "2. Required Information for Phone Tracking\n";
    cout << "3. How to Track Using the Hotline\n";
    cout << "4. Common Issues and Solutions\n";
    cout << "5. Back\n";
  cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nOverview of Phone Tracking Process:\n";
            cout << "- Phone tracking allows you to easily check the status of your state housing application.\n";
            cout << "- You can call the housing board dedicated hotline number to inquire about your application progress.\n";
            cout << "- Be sure to call during business hours to get timely assistance from the housing board staff.\n";
            cout << "- This process can save you time if you are unable to visit the housing board office in person.\n";
            break;
        case 2:
            cout << "\nRequired Information for Phone Tracking:\n";
            cout << "- **Application ID**: Make sure you have your application ID ready, as it is required for status verification.\n";
            cout << "- **Personal Details**: Some housing boards may ask for your name, address, and other personal information for identification.\n";
            cout << "- **Project Name or Scheme Details**: If your application is under a specific scheme, having the scheme details ready will speed up the process.\n";
            break;
        case 3:
            cout << "\nHow to Track Using the Hotline:\n";
            cout << "1. **Dial the Housing Board Hotline**: Look for the official hotline number on the housing board website.\n";
            cout << "2. **Provide Your Application ID**: Inform the representative about your application ID to start tracking.\n";
            cout << "3. **Answer Verification Questions**: You may be asked a few questions to confirm your identity.\n";
            cout << "4. **Request Status Information**: Ask the representative to provide the status of your application.\n";
            cout << "5. **Note Down the Information**: Write down any relevant information or next steps provided by the representative.\n";
            break;
        case 4:
            cout << "\nCommon Issues and Solutions:\n";
            cout << "- **Incorrect Application ID**: Double-check your ID before calling to avoid delays.\n";
            cout << "- **System Errors**: Sometimes the housing board's system may be down, so try calling back at a later time.\n";
            cout << "- **Unclear Status**: If the status is unclear or the representative cannot provide an update, ask for a follow-up call or an alternative method to track your application.\n";
            break;
        case 5:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void stateHousingDocumentVerification() {
    int choice;
    cout << "\nState Housing Scheme Application Status Tracking (Document Verification):\n";
    cout << "1. Overview of Document Verification Process\n";
    cout << "2. Documents Needed for Verification\n";
    cout << "3. Steps to Verify Your Documents\n";
    cout << "4. Tracking Status of Your Application\n";
    cout << "5. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nOverview of Document Verification Process:\n";
            cout << "- Document verification is an important step to confirm the authenticity of your application for state housing schemes.\n";
            cout << "- It is usually required after you submit your application form and supporting documents.\n";
            cout << "- Verification is done at the respective housing board office, where officials verify your personal, income, and residential details.\n";
            cout << "- It ensures that applicants meet all the eligibility criteria for the state housing scheme.\n";
            break;
        case 2:
            cout << "\nDocuments Needed for Verification:\n";
            cout << "- **Identity Proof**: Aadhar card, passport, voter ID, etc.\n";
            cout << "- **Income Certificate**: To prove eligibility under EWS or LIG categories.\n";
            cout << "- **Proof of Residence**: Utility bills, ration card, or rent agreement.\n";
            cout << "- **Photographs**: Passport-sized photographs may be required.\n";
            cout << "- **Application ID**: Ensure you have your application ID provided by the housing board during your application process.\n";
            break;
        case 3:
            cout << "\nSteps to Verify Your Documents:\n";
            cout << "1. **Visit the Housing Board Office**: Go to the office of the relevant state housing authority.\n";
            cout << "2. **Submit Your Application ID**: Provide the application ID to the verification officer.\n";
            cout << "3. **Submit Supporting Documents**: Present your original and photocopies of all required documents.\n";
            cout << "4. **Document Review**: Officials will review your documents and verify that all information matches the application form.\n";
            cout << "5. **Verification Confirmation**: Once your documents are successfully verified, you will receive a confirmation receipt.\n";
            break;
        case 4:
            cout << "\nTracking Status of Your Application:\n";
            cout << "- After document verification, you can track the status of your application.\n";
            cout << "- Visit the housing board's official website or the office to check if your application is approved or still under review.\n";
            cout << "- Some housing boards provide an online portal where you can track the status using your application ID.\n";
            cout << "- If there are any issues or if your application is pending further verification, the housing board will notify you.\n";
            break;
        case 5:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}


void accessFinancialAid() {
    int choice;
    cout << "\n--- Access Financial Aid ---" << endl;
    cout << "1. Subsidized Loans\n";
    cout << "2. NGO Assistance\n";
    cout << "3. Government Subsidies\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            subsidizedLoans();
            break;
        case 2:
            ngoAssistance();
            break;
        case 3:
            governmentSubsidies();
            break;
        case 4:
            cout << "Returning to House Allotment Module...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void subsidizedLoans() {
    int choice;
    cout << "\n--- Subsidized Loans under PMAY ---" << endl;
    cout << "1. Bank Loans (SBI, PNB, etc.)\n";
    cout << "2. PMAY Subsidized Loans\n";
    cout << "3. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            bankLoans();
            break;
        case 2:
            pmayLoans();
            break;
        case 3:
            cout << "Returning to Housing Financial Aid Module...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void bankLoans() {
    int choice;
    cout << "\n--- Bank Loans for Subsidized Housing Information ---\n";
    cout << "1. Overview of Bank Loans for Subsidized Housing\n";
    cout << "2. Eligibility Criteria for Bank Loans\n";
    cout << "3. Bank Loan Application Process\n";
    cout << "4. Interest Rates and Loan Amounts\n";
    cout << "5. Loan Repayment Terms\n";
    cout << "6. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nOverview of Bank Loans for Subsidized Housing:\n";
            cout << "- Nationalized banks such as State Bank of India (SBI), Punjab National Bank (PNB), and others offer housing loans with subsidized interest rates under government schemes.\n";
            cout << "- These loans are designed to make home ownership more accessible for low- and middle-income families.\n";
            cout << "- Subsidized loans are available for purchasing, constructing, or renovating homes.\n";
            cout << "- Loans may be offered under schemes like the Pradhan Mantri Awas Yojana (PMAY) or other government housing initiatives.\n";
            break;
        case 2:
            cout << "\nEligibility Criteria for Bank Loans:\n";
            cout << "- **Income Group**: The applicant must belong to a specific income group, such as Economically Weaker Sections (EWS), Low Income Groups (LIG), or Middle Income Groups (MIG).\n";
            cout << "- **Age**: The applicant should meet the age criteria set by the bank or lending institution.\n";
            cout << "- **Credit Score**: A minimum credit score may be required for loan approval.\n";
            cout << "- **Property Ownership**: The applicant must not own a pucca house anywhere in India, as some schemes are meant for first-time homeowners.\n";
            cout << "- **Geographic Restrictions**: Some loan schemes may only be available for specific regions or states.\n";
            break;
        case 3:
            cout << "\nBank Loan Application Process:\n";
            cout << "1. **Visit the Nearest Branch**: Go to the nearest branch of SBI, PNB, or another participating bank.\n";
            cout << "2. **Fill the Loan Application**: Complete the loan application form with personal and financial details.\n";
            cout << "3. **Submit Required Documents**: Provide necessary documents such as identity proof, income proof, residence proof, and details about the property you intend to purchase or construct.\n";
            cout << "4. **Eligibility Assessment**: The bank will assess your eligibility based on income, credit score, and other factors.\n";
            cout << "5. **Loan Approval and Disbursement**: Once approved, the loan amount will be disbursed to your account or directly to the seller or contractor.\n";
            break;
        case 4:
            cout << "\nInterest Rates and Loan Amounts:\n";
            cout << "- The interest rates for subsidized housing loans are typically lower than those for regular housing loans.\n";
            cout << "- **SBI Housing Loan**: Offers loans at subsidized interest rates, with interest rates ranging between 6.5% and 8% depending on the scheme and eligibility.\n";
            cout << "- **PNB Housing Loan**: Offers housing loans at competitive interest rates, with subsidized options for low-income families.\n";
            cout << "- **Loan Amount**: The loan amount depends on the applicant's income, property value, and eligibility. For example, loans under PMAY can range from Rs. 1 lakh to Rs. 12 lakh or more.\n";
            cout << "- **Loan Tenure**: Loan tenures can range from 10 to 30 years, depending on the bank and applicant's repayment capacity.\n";
            break;
        case 5:
            cout << "\nLoan Repayment Terms:\n";
            cout << "- **Loan Tenure**: Loan repayment periods generally range from 10 to 30 years.\n";
            cout << "- **EMI Calculation**: The monthly repayment amount (EMI) is determined based on the loan amount, interest rate, and tenure.\n";
            cout << "- **Prepayment Option**: Some banks may allow prepayment of loans without penalties, while others may have specific conditions for prepayment.\n";
            cout << "- **Penalty for Late Payment**: If you miss an EMI, there may be a penalty fee, and your credit score may be negatively affected.\n";
            cout << "- **Loan Settlement**: Once all EMIs are paid, the loan is considered settled, and the property title is transferred to the borrower.\n";
            break;
        case 6:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void pmayLoans() {
    int choice;
    cout << "\n--- PMAY Subsidized Loans Information ---\n";
    cout << "1. Overview of PMAY Subsidized Loans\n";
    cout << "2. Loan Eligibility under PMAY\n";
    cout << "3. PMAY Loan Application Process\n";
    cout << "4. PMAY Loan Amount and Interest Rates\n";
    cout << "5. PMAY Loan Repayment Terms\n";
    cout << "6. Back\n";
  cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nOverview of PMAY Subsidized Loans:\n";
            cout << "- PMAY offers subsidized home loans to eligible individuals from Economically Weaker Sections (EWS), Low Income Groups (LIG), and Middle-Income Groups (MIG).\n";
            cout << "- The scheme provides financial support for purchasing or constructing a house.\n";
            cout << "- Loans are available at lower interest rates compared to standard housing loans, making homeownership more accessible.\n";
            cout << "- PMAY loans can be availed through various banks and housing finance companies.\n";
            break;
        case 2:
            cout << "\nEligibility for PMAY Subsidized Loans:\n";
            cout << "- **Income Group**: The applicant must belong to EWS, LIG, or MIG categories as defined by the government.\n";
            cout << "- **Ownership**: The applicant must not own a pucca house anywhere in India.\n";
            cout << "- **Family Criteria**: The loan is available for a family, which includes husband, wife, and unmarried children.\n";
            cout << "- **Age and Credit Score**: There may be age and credit score criteria that banks or financial institutions will assess during the application process.\n";
            cout << "- **Geographical Restrictions**: Some regions may have additional requirements based on local laws and the specific PMAY scheme applied.\n";
            break;
        case 3:
            cout << "\nPMAY Loan Application Process:\n";
            cout << "1. **Visit PMAY Official Portal**: Go to pmaymis.gov.in to start the loan application process.\n";
            cout << "2. **Select Your Loan Category**: Choose between EWS, LIG, or MIG based on your eligibility.\n";
            cout << "3. **Fill the Application Form**: Provide personal, income, and family details required for the application.\n";
            cout << "4. **Upload Documents**: Submit necessary documents like ID proof, income certificate, and proof of ownership or residence.\n";
            cout << "5. **Submit and Track**: Submit the application and track its status on the portal.\n";
            cout << "6. **Visit the Bank or Lender**: After the online approval, visit the bank or housing finance company for further processing and loan disbursement.\n";
            break;
        case 4:
            cout << "\nPMAY Loan Amount and Interest Rates:\n";
            cout << "- The loan amount under PMAY depends on the income category of the applicant and the cost of the house.\n";
            cout << "- **EWS/LIG**: Loans up to Rs. 6 lakh with an interest subsidy of up to 6.5%.\n";
            cout << "- **MIG I**: Loans up to Rs. 12 lakh with an interest subsidy of up to 4%.\n";
            cout << "- **MIG II**: Loans up to Rs. 18 lakh with an interest subsidy of up to 3%.\n";
            cout << "- **Loan Tenure**: Typically, PMAY loans are available for up to 20 years.\n";
            cout << "- **Interest Rates**: PMAY provides subsidized interest rates compared to traditional home loans.\n";
            break;
        case 5:
            cout << "\nPMAY Loan Repayment Terms:\n";
            cout << "- **Repayment Period**: The repayment period for PMAY loans can range from 10 to 20 years.\n";
            cout << "- **EMI Amount**: The EMI is calculated based on the loan amount, interest rate, and loan tenure.\n";
            cout << "- **Prepayment Option**: Some banks may allow prepayment without penalty; however, terms can vary.\n";
            cout << "- **Default Consequences**: Failure to repay the loan on time may lead to penalties, and the lender may take legal action to recover the loan amount.\n";
            break;
        case 6:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void ngoAssistance() {
    int choice;
    cout << "\n--- NGO Assistance for Housing ---" << endl;
    cout << "1. Habitat for Humanity\n";
    cout << "2. Other NGOs\n";
    cout << "3. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            habitatForHumanity();
            break;
        case 2:
            otherNGOs();
            break;
        case 3:
            cout << "Returning to Housing Financial Aid Module...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void habitatForHumanity() {
    int choice;
    cout << "\n--- Habitat for Humanity - NGO Assistance for Housing ---" << endl;
    cout << "1. Overview of Habitat for Humanity Housing Assistance\n";
    cout << "2. Eligibility Criteria for Habitat for Humanity Programs\n";
    cout << "3. How to Apply for Housing Assistance\n";
    cout << "4. Habitat for Humanity Contact Information\n";
    cout << "5. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nOverview of Habitat for Humanity Housing Assistance:\n";
            cout << "- Habitat for Humanity is an international NGO focused on providing affordable housing to low-income families.\n";
            cout << "- The organization helps build or repair homes for those in need, particularly in urban and rural areas.\n";
            cout << "- Habitat for Humanity works through partnerships with individuals, organizations, and local governments.\n";
            cout << "- Their mission is to create a world where everyone has a decent place to live.\n";
            break;
        case 2:
            cout << "\nEligibility Criteria for Habitat for Humanity Programs:\n";
            cout << "- **Income Level**: Typically, Habitat for Humanity programs are aimed at families with low to moderate income.\n";
            cout << "- **Need for Housing**: Applicants must demonstrate a need for housing, whether it's due to overcrowding, substandard living conditions, or homelessness.\n";
            cout << "- **Ability to Pay**: While Habitat for Humanity offers affordable housing, applicants must show the ability to make monthly payments on a new home.\n";
            cout << "- **Willingness to Partner**: Habitat for Humanity requires families to contribute sweat equity, meaning they will help build their homes or work on other community projects.\n";
            break;
        case 3:
            cout << "\nHow to Apply for Housing Assistance from Habitat for Humanity:\n";
            cout << "1. **Find a Local Habitat for Humanity Affiliate**: Visit the Habitat for Humanity website or call their national helpline to locate a nearby affiliate.\n";
            cout << "2. **Check Eligibility**: Speak with a representative to check if you qualify for their housing assistance programs.\n";
            cout << "3. **Complete the Application**: Fill out the application form, which will require personal details, family size, income information, and housing needs.\n";
            cout << "4. **Submit Documents**: Provide proof of income, family composition, and other necessary documents as requested by the local affiliate.\n";
            cout << "5. **Attend an Interview**: Some affiliates may require a face-to-face interview to further assess eligibility.\n";
            cout << "6. **Wait for Approval**: After submitting your application and documents, the local affiliate will review your case and notify you of the outcome.\n";
            break;
        case 4:
            cout << "\nHabitat for Humanity Contact Information:\n";
            cout << "- **Website**: Visit www.habitat.org for detailed information about Habitat for Humanity programs and to find local affiliates.\n";
            cout << "- **Helpline**: Call the Habitat for Humanity national helpline for guidance at [insert phone number for your country].\n";
            cout << "- **Local Affiliate Contact**: For specific regions, contact your nearest Habitat affiliate through their website or social media platforms.\n";
            break;
        case 5:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void otherNGOs() {
    int choice;
    cout << "\n--- Other NGOs Providing Housing Assistance ---" << endl;
    cout << "1. Overview of NGO Housing Assistance\n";
    cout << "2. List of NGOs Providing Housing Support\n";
    cout << "3. How to Apply for Housing Assistance from NGOs\n";
    cout << "4. Contact Information for NGO Housing Assistance\n";
    cout << "5. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nOverview of NGO Housing Assistance:\n";
            cout << "- Several Non-Governmental Organizations (NGOs) are actively involved in providing housing assistance to low-income families.\n";
            cout << "- These NGOs aim to help underprivileged sections of society, including people affected by slum redevelopment, homelessness, and natural disasters.\n";
            cout << "- Housing support may include direct funding, home construction assistance, and in some cases, relocation services for displaced individuals.\n";
            break;
        case 2:
            cout << "\nList of NGOs Providing Housing Support:\n";
            cout << "- **Goonj**: Known for its focus on community-driven programs and providing basic necessities like housing to marginalized communities.\n";
            cout << "- **Smile Foundation**: Provides affordable housing and support for families in distress, especially in urban slums.\n";
            cout << "- **Habitat for Humanity**: An international NGO offering affordable housing and home improvement programs for low-income families.\n";
            cout << "- **HelpAge India**: Focuses on elderly individuals, providing housing assistance and shelter programs for senior citizens.\n";
            cout << "- **Akshaya Patra Foundation**: Provides housing support along with food and education to vulnerable communities.\n";
            break;
        case 3:
            cout << "\nHow to Apply for Housing Assistance from NGOs:\n";
            cout << "1. **Identify NGOs in Your Area**: Find NGOs that specialize in housing assistance by checking online directories or visiting local community centers.\n";
            cout << "2. **Eligibility Check**: NGOs often have specific eligibility criteria based on income, family size, and geographic location.\n";
            cout << "3. **Document Submission**: Most NGOs require documents such as identity proof, income certificates, and proof of residence.\n";
            cout << "4. **Application Process**: Submit an application form with the required documents either online (if available) or in person at the NGO office.\n";
            cout << "5. **Follow Up**: After applying, contact the NGO for status updates or additional steps in the application process.\n";
            break;
        case 4:
            cout << "\nContact Information for NGO Housing Assistance:\n";
            cout << "- **Goonj**: Visit their website at www.goonj.org or call their helpline for more information on housing support.\n";
            cout << "- **Smile Foundation**: Reach them through their website at www.smilefoundationindia.org or contact their local chapters.\n";
            cout << "- **Habitat for Humanity**: Contact them via www.habitat.org or visit their regional offices for housing programs.\n";
            cout << "- **HelpAge India**: Call their helpline or visit www.helpageindia.org to inquire about elderly housing initiatives.\n";
            cout << "- **Akshaya Patra Foundation**: Visit www.akshayapatra.org for details on their programs supporting housing and other necessities.\n";
            break;
        case 5:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void governmentSubsidies() {
    int choice;
    cout << "\n--- Government Subsidies for Housing ---" << endl;
    cout << "1. DBT (Direct Benefit Transfer)\n";
    cout << "2. Municipal Office Subsidy Programs\n";
    cout << "3. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            dbtSubsidy();
            break;
        case 2:
            municipalOfficeSubsidy();
            break;
        case 3:
            cout << "Returning to Housing Financial Aid Module...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void dbtSubsidy() {
    int choice;
    cout << "\n--- Direct Benefit Transfer (DBT) Subsidy for Housing ---" << endl;
    cout << "1. Overview of DBT Subsidy for Housing\n";
    cout << "2. How DBT Subsidy Works for Housing\n";
    cout << "3. Eligibility Criteria for DBT Subsidy\n";
    cout << "4. Steps to Apply for DBT Subsidy\n";
    cout << "5. Contact Information for DBT Subsidy Inquiries\n";
    cout << "6. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nOverview of DBT Subsidy for Housing:\n";
            cout << "- DBT stands for Direct Benefit Transfer, a system through which subsidies are transferred directly to the beneficiaries.\n";
            cout << "- Under housing schemes, DBT subsidies aim to provide financial assistance to eligible individuals for purchasing or constructing homes.\n";
            cout << "- The subsidy is transferred directly into the beneficiary bank account, eliminating intermediaries and reducing delays.\n";
            break;
        case 2:
            cout << "\nHow DBT Subsidy Works for Housing:\n";
            cout << "- The government allocates a housing subsidy to eligible individuals or families.\n";
            cout << "- Once eligibility is confirmed, the subsidy is directly transferred to the applicant registered bank account.\n";
            cout << "- The system ensures transparency, reduces corruption, and speeds up the disbursement process.\n";
            cout << "- To receive the subsidy, applicants need to link their Aadhaar number to their bank accounts for smooth transfer.\n";
            break;
        case 3:
            cout << "\nEligibility Criteria for DBT Subsidy:\n";
            cout << "- **Income Level**: Primarily available to low-income households, with specific income limits depending on the scheme.\n";
            cout << "- **Aadhaar Number**: The applicant must have a valid Aadhaar number, linked to their bank account.\n";
            cout << "- **Residency**: The subsidy may be available to residents of specific regions or cities based on government criteria.\n";
            cout << "- **No Ownership of Pucca House**: The applicant should not own a permanent house anywhere in India.\n";
            break;
        case 4:
            cout << "\nSteps to Apply for DBT Subsidy:\n";
            cout << "1. **Visit the Nearest Municipal Office**: Inquire about DBT subsidy schemes available for housing.\n";
            cout << "2. **Submit Documents**: Provide identity proof (Aadhaar, PAN), income certificate, proof of residence, and bank account details.\n";
            cout << "3. **Application Form**: Complete the application form for DBT subsidy at the municipal office.\n";
            cout << "4. **Eligibility Verification**: Your documents and eligibility will be verified by municipal authorities.\n";
            cout << "5. **Subsidy Transfer**: Upon approval, the subsidy amount will be directly transferred to your linked bank account.\n";
            break;
        case 5:
            cout << "\nContact Information for DBT Subsidy Inquiries:\n";
            cout << "- **Municipal Office Helpline**: Call the municipal office or visit their website for details on DBT subsidies.\n";
            cout << "- **Government Websites**: You can check the eligibility and application process online via government portals like PMAYMIS.\n";
            cout << "- **Bank Helpline**: Contact your bank for assistance with linking your Aadhaar number to your account for DBT transfers.\n";
            break;
        case 6:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void municipalOfficeSubsidy() {
    int choice;
    cout << "\n--- Municipal Office Subsidy Programs ---" << endl;
    cout << "1. Overview of Municipal Office Subsidy Programs\n";
    cout << "2. Required Documents for Subsidy Applications\n";
    cout << "3. Steps to Apply for Subsidy at Municipal Office\n";
    cout << "4. Contact Information for Subsidy Inquiries\n";
    cout << "5. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nOverview of Municipal Office Subsidy Programs:\n";
            cout << "- Municipal offices often run various housing subsidy programs for low-income families.\n";
            cout << "- These subsidies help reduce the financial burden of purchasing or renting a home.\n";
            cout << "- The programs may vary depending on the location and the specific eligibility criteria.\n";
            cout << "- Subsidy amounts can depend on income, family size, and local housing needs.\n";
            break;
        case 2:
            cout << "\nRequired Documents for Subsidy Applications:\n";
            cout << "- **Identity Proof**: Valid documents like Aadhaar, Passport, or Voter ID.\n";
            cout << "- **Income Certificate**: To confirm your eligibility for low-income programs.\n";
            cout << "- **Proof of Residence**: Ration card, utility bills, or other government-issued documents.\n";
            cout << "- **Application Form**: Complete the municipal office subsidy application form.\n";
            break;
        case 3:
            cout << "\nSteps to Apply for Subsidy at Municipal Office:\n";
            cout << "1. **Visit the Municipal Office**: Go to your local municipal office and inquire about the housing subsidy programs available.\n";
            cout << "2. **Submit Documents**: Provide the necessary documents like identity proof, income certificate, and proof of residence.\n";
            cout << "3. **Complete the Application**: Fill out the application form provided by the municipal office.\n";
            cout << "4. **Verification**: Your documents will be verified by municipal authorities.\n";
            cout << "5. **Wait for Approval**: After verification, your subsidy application will be processed.\n";
            break;
        case 4:
            cout << "\nContact Information for Subsidy Inquiries:\n";
            cout << "- **Municipal Office Helpline**: Call the municipal office helpline for further information on subsidy programs.\n";
            cout << "- **Website**: Many municipal offices provide details about available subsidies online.\n";
            cout << "- **Walk-in Visits**: Visit your local municipal office during working hours to speak with a representative about the subsidy program.\n";
            break;
        case 5:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void nearbyHousingProjects() {
    int choice;
    cout << "\n--- Nearby Housing Projects ---" << endl;
    cout << "1. Government Housing Projects\n";
    cout << "2. Affordable Private Housing\n";
    cout << "3. Relocation Camps\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            governmentProjects();
            break;
        case 2:
            privateHousingProjects();
            break;
        case 3:
            relocationCamps();
            break;
        case 4:
            cout << "Returning to House Allotment Module...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void governmentProjects() {
    int choice;
    cout << "\n--- Government Housing Projects ---" << endl;
    cout << "1. Nearby PMAY Projects\n";
    cout << "2. Nearby State Housing Projects\n";
    cout << "3. Affordable Private Housing\n";
    cout << "4. Relocation Camps\n";
    cout << "5. Back\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            nearbyPMAYProjects();
            break;
        case 2:
            nearbyStateHousingProjects();
            break;
        case 3:
            privateAffordableHousing();
            break;
        case 4:
            relocationCamps();
            break;
        case 5:
            cout << "Returning to Housing Financial Aid Module...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void nearbyPMAYProjects() {
    int choice;
    cout << "\n--- Nearby PMAY Projects ---" << endl;
    cout << "1. Overview of PMAY Projects\n";
    cout << "2. How to Locate PMAY Projects Near You\n";
    cout << "3. Eligibility Criteria for PMAY Projects\n";
    cout << "4. How to Apply for PMAY Housing\n";
    cout << "5. Contacting PMAY for Further Assistance\n";
    cout << "6. PMAY Project Locations and Availability\n";
    cout << "7. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nOverview of PMAY Projects:\n";
            cout << "- Pradhan Mantri Awas Yojana (PMAY) is a government initiative to provide affordable housing for all, particularly for Economically Weaker Sections (EWS), Low-Income Groups (LIG), and Middle-Income Groups (MIG).\n";
            cout << "- PMAY projects include both urban and rural housing schemes designed to meet the needs of people who cannot afford homes through the regular real estate market.\n";
            cout << "- The government offers financial subsidies, affordable loan options, and even in some cases, ready-to-move homes through these projects.\n";
            cout << "- The scheme also aims to create 20 million homes by 2022 under the 'Housing for All' mission.\n";
            break;
        case 2:
            cout << "\nHow to Locate PMAY Projects Near You:\n";
            cout << "- **Visit the PMAY Official Website**: The best way to locate nearby PMAY projects is to visit the official website at [pmaymis.gov.in](https://pmaymis.gov.in).\n";
            cout << "- **Use the Project Locator Tool**: On the website, you can use the 'Project Locator' tool, which provides a detailed list of ongoing PMAY projects, locations, and available homes in your area.\n";
            cout << "- **Contact Local Municipal Offices**: If youre unable to access the internet or need more localized information, visit your nearest municipal office for details about available PMAY projects.\n";
            cout << "- **Use Government Apps**: Some states and municipalities also have dedicated mobile apps that provide real-time updates on PMAY project availability.\n";
            break;
        case 3:
            cout << "\nEligibility Criteria for PMAY Projects:\n";
            cout << "- **Income Limits**: PMAY is primarily aimed at low- and middle-income families. Eligibility varies based on income groups: EWS (annual income of up to Rs. 3 lakh), LIG (Rs. 3 lakh to Rs. 6 lakh), and MIG (Rs. 6 lakh to Rs. 18 lakh).\n";
            cout << "- **No Existing Pucca House**: Applicants must not own a pucca (permanent) house anywhere in India.\n";
            cout << "- **Age and Family Size**: Eligibility may also depend on the applicant age, marital status, and the number of dependents in the family.\n";
            cout << "- **Residency**: Applicants must be Indian citizens, and in some cases, applicants must be residents of the specific state or area offering the scheme.\n";
            cout << "- **For MIG**: Middle-income groups can also avail subsidies on housing loans for properties under PMAY, subject to fulfilling specific criteria.\n";
            break;
        case 4:
            cout << "\nHow to Apply for PMAY Housing:\n";
            cout << "- **Online Application**: You can apply for a PMAY house online through the official PMAY website [pmaymis.gov.in](https://pmaymis.gov.in). Create an account and follow the instructions for filling out the application form.\n";
            cout << "- **Required Documents**: Prepare documents such as Aadhaar card, income certificate, proof of residence, and details of the family members applying.\n";
            cout << "- **Municipal Office Application**: Alternatively, visit your nearest municipal office and submit a physical application form along with the required documents.\n";
            cout << "- **Check Application Status**: After submitting the application, you can track the status of your PMAY application online or by visiting the municipal office.\n";
            break;
        case 5:
            cout << "\nContacting PMAY for Further Assistance:\n";
            cout << "- **Customer Support**: For any queries, you can contact PMAY customer support via the website or call the helpline number provided on the PMAY website.\n";
            cout << "- **Visit Local Housing Offices**: For specific project-related information, contact local government or municipal housing offices that manage PMAY projects in your area.\n";
            cout << "- **Email Support**: You can also email the relevant PMAY authorities if you have any questions regarding the status of your application, project details, or eligibility.\n";
            cout << "- **State Government Housing Authorities**: In some cases, you may need to reach out to state government offices, as they may have specific information about PMAY projects and schemes in your region.\n";
            break;
        case 6:
            cout << "\nPMAY Project Locations and Availability:\n";
            cout << "- **Urban Areas**: PMAY urban projects are typically located in developing or newly developed areas of major cities. These include both ready-to-move homes and under-construction projects.\n";
            cout << "- **Rural Areas**: The PMAY Gramin (Rural) scheme focuses on providing homes in rural and semi-rural areas where infrastructure development is still in progress.\n";
            cout << "- **Project Locations**: Project locations are often updated on the official website of PMAY, which also provides information about specific projects like the number of homes available, their cost, and construction stages.\n";
            cout << "- **Search Tools**: You can use the PMAY website search functionality to view detailed project data, including location, availability, and eligibility criteria.\n";
            break;
        case 7:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void nearbyStateHousingProjects() {
    int choice;
    cout << "\n--- Nearby State Housing Projects ---" << endl;
    cout << "1. Overview of State Housing Schemes\n";
    cout << "2. How to Apply for State Housing Projects\n";
    cout << "3. List of Popular State Housing Schemes (MHADA, DDA, etc.)\n";
    cout << "4. Eligibility Criteria for State Housing Projects\n";
    cout << "5. How to Check Vacancies and Project Availability\n";
    cout << "6. Contacting State Housing Boards\n";
    cout << "7. Back\n";
  cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nOverview of State Housing Schemes:\n";
            cout << "- State housing schemes are initiatives launched by state governments to provide affordable housing for low- and middle-income families.\n";
            cout << "- These schemes offer homes in both urban and rural areas, with some focusing on providing homes in underdeveloped or developing areas to reduce overcrowding in metropolitan regions.\n";
            cout << "- Examples include MHADA (Maharashtra Housing and Area Development Authority) in Maharashtra, DDA (Delhi Development Authority) in Delhi, and other state-specific housing schemes.\n";
            cout << "- Each state housing project typically provides a range of housing types, including apartments, individual houses, and sometimes subsidized rental properties.\n";
            break;
        case 2:
            cout << "\nHow to Apply for State Housing Projects:\n";
            cout << "- **Step 1**: Research available state housing projects by visiting the state's housing board website or local offices.\n";
            cout << "- **Step 2**: Check the eligibility criteria for the project you're interested in. Criteria may include income limits, family size, or residence requirements.\n";
            cout << "- **Step 3**: Fill out an application form either online or in person at your local housing board office.\n";
            cout << "- **Step 4**: Submit the necessary documents for verification (e.g., identity proof, income certificate, proof of residence).\n";
            cout << "- **Step 5**: After submitting the application, you may need to wait for a response or selection process to receive an allocation.\n";
            break;
        case 3:
            cout << "\nList of Popular State Housing Schemes (MHADA, DDA, etc.):\n";
            cout << "- **MHADA (Maharashtra Housing and Area Development Authority)**: MHADA offers affordable housing options in cities like Mumbai, Pune, and other areas of Maharashtra. It caters to different income groups and provides homes through lotteries and direct sales.\n";
            cout << "- **DDA (Delhi Development Authority)**: The DDA is responsible for providing affordable housing in Delhi. It conducts periodic housing schemes, offering apartments in newly developed areas as well as older sectors.\n";
            cout << "- **UPAVP (Uttar Pradesh Awas Vikas Parishad)**: UPAVP runs several housing projects in Uttar Pradesh, including affordable houses in urban and rural regions.\n";
            cout << "- **TNHDC (Tamil Nadu Housing Development Corporation)**: TNHDC provides homes through its affordable housing schemes aimed at low-income families in Tamil Nadu.\n";
            cout << "- **KHB (Karnataka Housing Board)**: The KHB is responsible for constructing and managing affordable homes in Karnataka. The board runs housing schemes targeted at various income groups.\n";
            break;
        case 4:
            cout << "\nEligibility Criteria for State Housing Projects:\n";
            cout << "- **Income Criteria**: Many state housing schemes have income-based eligibility, typically targeting low- to middle-income families. Some states have specific income limits for economically weaker sections (EWS) and lower-income groups (LIG).\n";
            cout << "- **Residency Requirement**: Applicants are often required to be residents of the state or region where the housing project is located.\n";
            cout << "- **Family Size**: The size of the family may be a factor in determining eligibility, with certain schemes offering homes based on the number of family members.\n";
            cout << "- **No Previous Ownership**: Some schemes may require applicants to not own any property or pucca house in the region.\n";
            cout << "- **Age and Marital Status**: Certain projects may specify age limits or prefer applicants who are married or have children.\n";
            break;
        case 5:
            cout << "\nHow to Check Vacancies and Project Availability:\n";
            cout << "- **Visit the Official Website**: The official website of the state's housing board is the best place to check for real-time information on vacancies in specific housing projects.\n";
            cout << "- **Notifications**: Keep an eye on announcements for new housing lotteries or sales events. Most states publish notifications for upcoming housing schemes.\n";
            cout << "- **Contact Local Housing Offices**: In case you're unable to find information online, you can visit your local housing board office to inquire about available projects and application procedures.\n";
            cout << "- **Social Media and News**: Some housing boards and local governments also announce project details and vacancies through social media platforms and local newspapers.\n";
            break;
        case 6:
            cout << "\nContacting State Housing Boards:\n";
            cout << "- **Find Contact Information**: Each state's housing board or development authority will have a contact number, email, and physical address listed on their official website.\n";
            cout << "- **Local Housing Offices**: Most state housing boards have local offices in major cities and towns, where you can inquire about specific housing projects.\n";
            cout << "- **Customer Support**: Many state housing boards offer customer support helplines for direct inquiries, application status updates, and assistance with documentation.\n";
            cout << "- **Online Platforms**: Some state boards also offer online chat services or support ticket systems for quick resolutions.\n";
            break;
        case 7:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void privateAffordableHousing() {
    int choice;
    cout << "\n--- Affordable Private Housing Projects ---" << endl;
    cout << "1. Overview of Affordable Housing Projects by Private Builders\n";
    cout << "2. How to Contact Real Estate Agents for Affordable Housing\n";
    cout << "3. Types of Private Affordable Housing Projects\n";
    cout << "4. Eligibility and Financing for Private Housing Projects\n";
    cout << "5. Benefits of Choosing Affordable Private Housing\n";
    cout << "6. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nOverview of Affordable Housing Projects by Private Builders:\n";
            cout << "- Several private builders and developers are offering affordable housing options to cater to the low-income group (LIG) and economically weaker sections (EWS).\n";
            cout << "- These projects are located in both urban and suburban areas, providing better access to public facilities such as schools, hospitals, and transportation.\n";
            cout << "- Many builders are focusing on low-cost apartment complexes, which feature smaller units that meet the basic needs of families without compromising on quality.\n";
            cout << "- Builders often offer additional support, including financing options and government partnership schemes to ensure affordability.\n";
            break;
        case 2:
            cout << "\nHow to Contact Real Estate Agents for Affordable Housing:\n";
            cout << "- Real estate agents can play a vital role in connecting you with builders offering affordable housing options.\n";
            cout << "- Many agents specialize in budget-friendly properties and can help you find suitable projects within your budget.\n";
            cout << "- Contacting real estate agents is easy: visit their offices, call their customer service lines, or explore their websites to check for available affordable housing projects.\n";
            cout << "- Agents will provide detailed information on available units, their locations, price points, financing options, and eligibility requirements.\n";
            cout << "- Many agents also work with local builders directly, allowing you to access exclusive deals and discounts on affordable housing projects.\n";
            break;
        case 3:
            cout << "\nTypes of Private Affordable Housing Projects:\n";
            cout << "- **Affordable Apartments**: Typically, these are small-sized apartments in apartment complexes designed for low-income families. They are built with cost-effective materials and may have shared amenities like parking, playgrounds, and security.\n";
            cout << "- **Low-Cost Housing Units**: Some private builders focus on constructing low-cost housing units, often in emerging areas or outskirts of urban centers, where the cost of land is lower.\n";
            cout << "- **Rent-to-Own Schemes**: A number of developers offer rent-to-own models where you can rent a property with the option to purchase it after a set period, allowing you to eventually own the house without having to make a large upfront payment.\n";
            cout << "- **Prefabricated or Modular Homes**: In some areas, builders are using prefabricated or modular homes as a quick and affordable housing option. These homes are assembled in factories and transported to the site.\n";
            cout << "- **Government-Private Partnerships**: Some private developers collaborate with the government through initiatives like the Pradhan Mantri Awas Yojana (PMAY) to provide subsidized housing under affordable housing schemes.\n";
            break;
        case 4:
            cout << "\nEligibility and Financing for Private Housing Projects:\n";
            cout << "- **Eligibility**: Many private housing projects are specifically designed for low-income groups and families. Eligibility usually depends on factors such as your income level, family size, and whether you already own property.\n";
            cout << "- **Financing Options**: Builders often collaborate with banks and financial institutions to provide easy financing for homebuyers. You can opt for loans with lower interest rates or flexible payment terms.\n";
            cout << "- **Subsidized Housing Schemes**: Some private builders also participate in government housing schemes like PMAY (Pradhan Mantri Awas Yojana) that offer subsidies on home loans for first-time buyers.\n";
            cout << "- **Down Payments and Loan Terms**: Depending on the project, the down payment requirement can vary. Some builders may offer flexible down payment terms or support low-income applicants with government-backed subsidies.\n";
            break;
        case 5:
            cout << "\nBenefits of Choosing Affordable Private Housing:\n";
            cout << "- **Affordable Payment Plans**: Builders usually offer attractive and flexible payment plans, making it easier for families to pay for their homes over time.\n";
            cout << "- **Quality and Amenities**: Many affordable housing projects offer good construction quality, along with amenities like community spaces, security features, and convenient access to public transport.\n";
            cout << "- **Government Schemes and Subsidies**: Private builders often collaborate with the government to bring down costs for buyers, making it easier for low-income families to access homeownership.\n";
            cout << "- **Ownership**: Private housing projects allow individuals and families to own homes, which is a significant step toward financial stability and wealth-building.\n";
            cout << "- **Growing Communities**: With new affordable housing projects, entire neighborhoods and communities are developing, providing better local infrastructure, schools, hospitals, and jobs.\n";
            break;
        case 6:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}



void privateHousingProjects() {
    int choice;
    cout << "\n--- Affordable Private Housing Projects ---" << endl;
    cout << "1. Affordable Housing by Private Builders\n";
    cout << "2. Contact Real Estate Agents for Affordable Housing\n";
    cout << "3. Government-Private Partnerships\n";
    cout << "4. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            affordableHousingByBuilders();
            break;
        case 2:
            realEstateAgentsForAffordableHousing();
            break;
        case 3:
            governmentPrivatePartnerships();
            break;
        case 4:
            cout << "Returning to Housing Financial Aid Module...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void affordableHousingByBuilders() {
    int choice;
    cout << "\n--- Affordable Housing by Private Builders ---" << endl;
    cout << "1. Overview of Affordable Housing Projects\n";
    cout << "2. Contact Private Builders for Available Options\n";
    cout << "3. Affordable Housing Eligibility Criteria\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            privateHousingProjectsOverview();
            break;
        case 2:
            contactPrivateBuilders();
            break;
        case 3:
            affordableHousingEligibility();
            break;
        case 4:
            cout << "Returning to previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void privateHousingProjectsOverview() {
    int choice;
    cout << "\n--- Overview of Affordable Housing Projects by Private Builders ---" << endl;
    cout << "1. Overview of Affordable Housing Projects\n";
    cout << "2. Explore Projects in Urban Areas\n";
    cout << "3. Explore Projects in Suburban Areas\n";
    cout << "4. Visit Builders' Websites for Details\n";
    cout << "5. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nOverview of Affordable Housing Projects by Private Builders:\n";
            cout << "- Many private developers offer affordable housing options for low-income families.\n";
            cout << "- These projects are available in urban and suburban areas.\n";
            cout << "- Housing units range from small apartments to larger homes, depending on the area and builder.\n";
            cout << "- Visit the builder's website or contact their offices for detailed information and current projects.\n";
            break;
        case 2:
            cout << "\nAffordable Housing Projects in Urban Areas:\n";
            cout << "- Projects in urban areas are typically located close to business hubs, schools, and public transport.\n";
            cout << "- These homes are suitable for people who work in cities or prefer urban living.\n";
            cout << "- Urban projects usually have better amenities and higher connectivity.\n";
            break;
        case 3:
            cout << "\nAffordable Housing Projects in Suburban Areas:\n";
            cout << "- Projects in suburban areas tend to offer more space and are often more affordable.\n";
            cout << "- These homes may be suitable for families looking for a quieter, more spacious environment.\n";
            cout << "- Suburban projects may offer larger homes at a lower price compared to urban areas.\n";
            break;
        case 4:
            cout << "\nVisit Builders' Websites for Detailed Information:\n";
            cout << "- Builders' websites often provide project brochures, current pricing, floor plans, and booking procedures.\n";
            cout << "- You can find information about availability, models, and payment schemes.\n";
            break;
        case 5:
            cout << "Returning to previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void contactPrivateBuilders() {
    int choice;
    cout << "\n--- Contacting Private Builders for Available Housing Options ---" << endl;
    cout << "1. Contact Builders via Real Estate Agents\n";
    cout << "2. Contact Builders Directly for Information\n";
    cout << "3. Search Builders' Websites for Contact Details\n";
    cout << "4. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nContacting Private Builders via Real Estate Agents:\n";
            cout << "- Real estate agents can assist in finding affordable housing projects and provide property options.\n";
            cout << "- They may also offer deals and discounts on rent-to-own or purchase schemes.\n";
            cout << "- Agents can provide access to projects that may not be publicly listed.\n";
            break;
        case 2:
            cout << "\nContacting Builders Directly for Information:\n";
            cout << "- Most builders have sales offices where you can inquire directly about available properties.\n";
            cout << "- You can inquire about upcoming launches, payment plans, and eligibility criteria.\n";
            break;
        case 3:
            cout << "\nSearching Builders' Websites for Contact Details:\n";
            cout << "- Visit the official websites of builders to get contact details and customer service numbers.\n";
            cout << "- Websites often have a contact page with email addresses, phone numbers, and inquiry forms.\n";
            break;
        case 4:
            cout << "Returning to previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void affordableHousingEligibility() {
    int choice;
    cout << "\n--- Affordable Housing Eligibility Criteria ---" << endl;
    cout << "1. Income Limits for Affordable Housing\n";
    cout << "2. Family Size Requirements\n";
    cout << "3. Residency Criteria\n";
    cout << "4. Check Your Eligibility with Builders\n";
    cout << "5. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nIncome Limits for Affordable Housing:\n";
            cout << "- Most affordable housing projects are designed for low-income families.\n";
            cout << "- Income limits vary depending on the builder and the location of the project.\n";
            cout << "- Typically, the income should be below a certain threshold to qualify for affordable housing.\n";
            break;
        case 2:
            cout << "\nFamily Size Requirements for Affordable Housing:\n";
            cout << "- The size of your family may impact the type of housing unit available to you.\n";
            cout << "- Some projects may prioritize larger families with a greater need for space.\n";
            cout << "- Builders may require family documents to verify the number of family members.\n";
            break;
        case 3:
            cout << "\nResidency Criteria for Affordable Housing:\n";
            cout << "- Some affordable housing projects are reserved for residents of specific areas or cities.\n";
            cout << "- Certain projects may be designated for people who have lived in the region for a specified duration.\n";
            break;
        case 4:
            cout << "\nCheck Your Eligibility with Builders:\n";
            cout << "- Builders and real estate agents can help verify your eligibility for specific projects.\n";
            cout << "- It is important to gather your financial and family documents before making an inquiry.\n";
            break;
        case 5:
            cout << "Returning to previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void realEstateAgentsForAffordableHousing() {
    int choice;
    cout << "\n--- Contacting Real Estate Agents for Affordable Housing ---" << endl;
    cout << "1. Find a Real Estate Agent Specializing in Affordable Housing\n";
    cout << "2. Ask About Deals and Discounts on Rent-to-Own Schemes\n";
    cout << "3. Inquire About Property Financing Options\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nFinding a Real Estate Agent Specializing in Affordable Housing:\n";
            cout << "- Look for agents with expertise in budget-friendly properties and affordable housing projects.\n";
            cout << "- These agents will be familiar with available options and may have access to exclusive deals.\n";
            break;
        case 2:
            cout << "\nAsk About Deals and Discounts on Rent-to-Own Schemes:\n";
            cout << "- Many real estate agents can help you find rent-to-own schemes, which allow you to rent a property with the option to purchase.\n";
            cout << "- Some builders may offer special discounts for those interested in rent-to-own schemes.\n";
            break;
        case 3:
            cout << "\nInquiring About Property Financing Options:\n";
            cout << "- Real estate agents can provide information on financing options, including home loans and subsidies for affordable housing.\n";
            cout << "- They can help you navigate through loan applications and eligibility criteria.\n";
            break;
        case 4:
            cout << "Returning to previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void governmentPrivatePartnerships() {
    int choice;
    cout << "\n--- Government-Private Partnerships for Housing ---" << endl;
    cout << "1. Overview of Government-Private Housing Partnerships\n";
    cout << "2. Pradhan Mantri Awas Yojana (PMAY) Partnerships\n";
    cout << "3. Check Availability of Joint Projects in Your Region\n";
    cout << "4. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nOverview of Government-Private Housing Partnerships:\n";
            cout << "- Some government housing schemes collaborate with private builders to offer affordable housing options.\n";
            cout << "- These partnerships help increase the number of housing units available for low-income families.\n";
            cout << "- The government may offer land or subsidies to private builders in exchange for providing affordable homes.\n";
            break;
        case 2:
            cout << "\nPradhan Mantri Awas Yojana (PMAY) Partnerships:\n";
            cout << "- PMAY is a key government initiative aimed at providing affordable housing to economically weaker sections.\n";
            cout << "- Private builders participate in PMAY by offering homes at subsidized rates to eligible beneficiaries.\n";
            cout << "- Visit the official PMAY website or your local municipal office for more details on available projects.\n";
            break;
        case 3:
            cout << "\nCheck Availability of Joint Government-Private Projects in Your Region:\n";
            cout << "- You can inquire with local authorities or builders to check for joint projects in your area.\n";
            cout << "- Government websites or builder's pages may provide information about projects that are part of such partnerships.\n";
            break;
        case 4:
            cout << "Returning to previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void relocationCamps() {
    int choice;
    cout << "\n--- Relocation Camps ---" << endl;
    cout << "1. Slum Redevelopment Camps\n";
    cout << "2. Temporary Housing Options\n";
    cout << "3. Contact Municipal Authorities\n";
    cout << "4. Back\n";
   cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            slumRedevelopmentCamps();
            break;
        case 2:
            temporaryHousingOptions();
            break;
        case 3:
            contactMunicipalAuthorities();
            break;
        case 4:
            cout << "Returning to Housing Module...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void slumRedevelopmentCamps() {
    int choice;
    cout << "\n--- Slum Redevelopment Camps ---" << endl;
    cout << "1. Overview of Slum Redevelopment Camps\n";
    cout << "2. Purpose of Slum Redevelopment Camps\n";
    cout << "3. Types of Facilities Provided in Redevelopment Camps\n";
    cout << "4. Eligibility for Relocation to Redevelopment Camps\n";
    cout << "5. How to Apply for Relocation to Redevelopment Camps\n";
    cout << "6. Contacting Authorities for More Information\n";
    cout << "7. Back\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "\nOverview of Slum Redevelopment Camps:\n";
            cout << "- Slum Redevelopment Camps are temporary housing facilities set up by the government during the redevelopment of slum areas.\n";
            cout << "- These camps are designed to ensure that individuals and families who are displaced due to redevelopment projects are provided with a safe and secure living space.\n";
            cout << "- The main objective of these camps is to minimize the disruption to the lives of the residents while the redevelopment of their original homes is completed.\n";
            cout << "- Slum redevelopment projects are often part of larger urban improvement schemes to provide affordable housing and improve living standards in high-density areas.\n";
            break;
        case 2:
            cout << "\nPurpose of Slum Redevelopment Camps:\n";
            cout << "- **Temporary Housing**: These camps provide temporary accommodation for people whose homes are demolished or deemed uninhabitable due to redevelopment projects.\n";
            cout << "- **Safety and Security**: The main purpose is to provide residents with a secure environment, where they can live temporarily while their permanent housing is under construction or renovation.\n";
            cout << "- **Relocation During Redevelopment**: It allows for the smooth relocation of slum dwellers without causing further disruption to their livelihoods.\n";
            cout << "- **Preventing Homelessness**: By providing a safe place to stay, the camps ensure that no one is left homeless during the redevelopment process.\n";
            break;
        case 3:
            cout << "\nTypes of Facilities Provided in Redevelopment Camps:\n";
            cout << "- **Sanitation**: Most camps offer basic sanitation facilities such as toilets, sewage systems, and waste management services.\n";
            cout << "- **Clean Water**: Clean and safe drinking water is made available through water tanks or pipelines.\n";
            cout << "- **Shelters**: Temporary shelters like tents or pre-fabricated houses are provided to ensure that people have a roof over their heads.\n";
            cout << "- **Food and Nutrition**: In some camps, food services are available, with basic meals provided either through government-run kitchens or food distribution centers.\n";
            cout << "- **Medical Assistance**: Basic healthcare and medical services, including first aid and emergency response teams, may be available in larger camps.\n";
            cout << "- **Security**: Camps are typically monitored by security personnel to maintain safety for all residents.\n";
            break;
        case 4:
            cout << "\nEligibility for Relocation to Redevelopment Camps:\n";
            cout << "- **Residents of Redeveloped Slums**: Only those living in the slum areas designated for redevelopment are eligible to be moved to these camps.\n";
            cout << "- **Displaced Due to Redevelopment**: Individuals whose homes have been demolished or are affected by the redevelopment process are eligible for temporary relocation.\n";
            cout << "- **Legal Residents**: In some cases, only legal residents (those with proper documentation) are eligible for relocation assistance. Verification may be required.\n";
            cout << "- **No Property Ownership**: Residents who do not own property elsewhere and are living in the slum area without alternate housing arrangements will be prioritized.\n";
            break;
        case 5:
            cout << "\nHow to Apply for Relocation to Redevelopment Camps:\n";
            cout << "- **Visit Local Authorities**: To apply for relocation, residents must approach the local municipal authorities or redevelopment agencies managing the project.\n";
            cout << "- **Submit Documents**: You may need to provide identification proof, residency details, and in some cases, a certificate of displacement from the redevelopment agency.\n";
            cout << "- **Wait for Confirmation**: Once your eligibility is verified, you will be notified about the relocation process and the availability of space in the redevelopment camp.\n";
            cout << "- **On-Site Registration**: In some areas, registration for relocation may be done directly at the redevelopment site or temporary relocation office.\n";
            break;
        case 6:
            cout << "\nContacting Authorities for More Information:\n";
            cout << "- **Municipal Corporation**: For more detailed information about specific redevelopment camps, you can contact the local municipal corporation or redevelopment authority.\n";
            cout << "- **Helpline Numbers**: Some cities or states may have helplines for residents displaced by slum redevelopment projects.\n";
            cout << "- **Redevelopment Agencies**: You can also reach out to the redevelopment agencies managing the slum redevelopment program for updates on the status of relocation and camp availability.\n";
            cout << "- **Online Platforms**: Some municipal corporations have websites where you can find information on redevelopment camps and eligibility.\n";
            break;
        case 7:
            cout << "Returning to the previous menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void temporaryHousingOptions() {
    cout << "\nTemporary Housing Options:\n";
    cout << "- Various schemes offer temporary housing for those displaced by redevelopment or other large-scale urban projects.\n";
    cout << "- Housing options may include community halls, temporary shelters, or government-built camps.\n";
    cout << "- It is advisable to contact local authorities to learn about available temporary housing near your area.\n";
}

void contactMunicipalAuthorities() {
    cout << "\nContact Municipal Authorities for Relocation Details:\n";
    cout << "- Reach out to your local municipal corporation or redevelopment authority for specific details about relocation camps.\n";
    cout << "- Authorities can provide the schedule, registration process, and the available facilities at the relocation camps.\n";
    cout << "- You may also inquire about eligibility and duration of stay at these camps.\n";
}



void employment() {
    int choice;
    do {
        cout << "\n=== Employment Module ===" << endl;
        cout << "1. Job Opportunities\n";
        cout << "2. Skill Development Programs\n";
        cout << "3. Government Employment Schemes\n";
        cout << "4. Resume Building Support\n";
        cout << "5. Nearby Employment Centers\n";
        cout << "6. Exit\n";
        cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                jobOpportunities();
                break;
            case 2:
                skillDevelopmentPrograms();
                break;
            case 3:
                governmentSchemes();
                break;
            case 4:
                resumeBuildingSupport();
                break;
            case 5:
                nearbyEmploymentCenters();
                break;
            case 6:
                cout << "Exiting the Employment Module...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 6);
}

void jobOpportunities() {
    int choice;
    do {
        cout << "\n--- Job Opportunities ---" << endl;
        cout << "1. National Job Portals\n";
        cout << "2. Local Job Fair and Interviews\n";
        cout << "3. Freelance Work and Gig Economy\n";
        cout << "4. Back to Employment Menu\n";
        cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                nationalJobPortals();
                break;
            case 2:
                localJobFair();
                break;
            case 3:
                freelanceWork();
                break;
            case 4:
                cout << "Returning to Employment Menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);
}

void nationalJobPortals() {
    int choice;
    do {
        cout << "National Job Portals:\n";
        cout << "1. Visit Job Portals\n";
        cout << "2. Apply for Jobs\n";
        cout << "3. Filter Job Listings\n";
        cout << "4. Learn More About Portals\n";
        cout << "5. Back to Job Opportunities\n";
        cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                visitJobPortals();
                break;
            case 2:
                applyForJobs();
                break;
            case 3:
                filterJobListings();
                break;
            case 4:
                learnMoreAboutPortals();
                break;
            case 5:
                cout << "Returning to Job Opportunities Menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);
}

void visitJobPortals() {
    int choice;
    cout << "You can visit these websites:\n";
    cout << "1. Naukri.com\n";
    cout << "2. Indeed\n";
    cout << "3. Monster India\n";
    cout << "4. Back to National Job Portals\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Visit Naukri.com for job listings in various sectors and industries.\n";
            break;
        case 2:
            cout << "Indeed offers job openings, reviews, and salary details.\n";
            break;
        case 3:
            cout << "Monster India has a wide range of job openings, including for freshers.\n";
            break;
        case 4:
            cout << "Returning to National Job Portals...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void applyForJobs() {
    int choice;
    cout << "Options for applying to jobs:\n";
    cout << "1. Upload Resume\n";
    cout << "2. Apply Using LinkedIn Profile\n";
    cout << "3. Apply with One-Click Applications\n";
    cout << "4. Back to National Job Portals\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Upload your resume in PDF or Word format to apply to multiple jobs at once.\n";
            break;
        case 2:
            cout << "You can apply to jobs directly using your LinkedIn profile for a faster application process.\n";
            break;
        case 3:
            cout << "Some portals offer 'one-click applications' where your resume is automatically submitted to compatible job listings.\n";
            break;
        case 4:
            cout << "Returning to National Job Portals...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void filterJobListings() {
    int choice;
    cout << "Filtering options for job listings:\n";
    cout << "1. Filter by Location\n";
    cout << "2. Filter by Salary Range\n";
    cout << "3. Filter by Job Title\n";
    cout << "4. Back to National Job Portals\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Use the location filter to search for jobs based on cities, states, or countries.\n";
            break;
        case 2:
            cout << "Set a salary range to only view jobs within your expected pay scale.\n";
            break;
        case 3:
            cout << "Search by job title (e.g., Software Developer, Marketing Manager) to find the best fit.\n";
            break;
        case 4:
            cout << "Returning to National Job Portals...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void learnMoreAboutPortals() {
    int choice;
    cout << "Learn more about popular job portals:\n";
    cout << "1. Naukri.com - Features and Benefits\n";
    cout << "2. Indeed - Features and Benefits\n";
    cout << "3. Monster India - Features and Benefits\n";
    cout << "4. Back to National Job Portals\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Naukri.com is India's largest job search engine with various features like job alerts, career advice, and resume building.\n";
            break;
        case 2:
            cout << "Indeed offers job search, salary information, and reviews to help you make informed decisions.\n";
            break;
        case 3:
            cout << "Monster India focuses on freshers and experienced candidates with a variety of job listings and career resources.\n";
            break;
        case 4:
            cout << "Returning to National Job Portals...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}


void localJobFair() {
    int choice;
    do {
        cout << "Local Job Fair and Interviews:\n";
        cout << "1. Find Local Job Fairs\n";
        cout << "2. Register for Job Fairs\n";
        cout << "3. Prepare for Interviews\n";
        cout << "4. Learn More About Local Job Fairs\n";
        cout << "5. Back to Job Opportunities\n";
        cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                findLocalJobFairs();
                break;
            case 2:
                registerForJobFairs();
                break;
            case 3:
                prepareForInterviews();
                break;
            case 4:
                learnMoreAboutJobFairs();
                break;
            case 5:
                cout << "Returning to Job Opportunities Menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);
}

void findLocalJobFairs() {
    int choice;
    cout << "Where would you like to find local job fairs?\n";
    cout << "1. Local Government and NGO Job Fairs\n";
    cout << "2. Private Firm Organized Fairs\n";
    cout << "3. Community Center and College Fairs\n";
    cout << "4. Back to Local Job Fair and Interviews\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Check with your local government and NGOs for community-driven job fairs.\n";
            break;
        case 2:
            cout << "Many private firms organize job fairs to recruit candidates from the local area.\n";
            break;
        case 3:
            cout << "Community centers and colleges often host job fairs where local employers participate.\n";
            break;
        case 4:
            cout << "Returning to Local Job Fair and Interviews...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void registerForJobFairs() {
    int choice;
    cout << "How would you like to register for local job fairs?\n";
    cout << "1. Online Registration\n";
    cout << "2. Walk-In Registration\n";
    cout << "3. Group Registration\n";
    cout << "4. Back to Local Job Fair and Interviews\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Most job fairs offer online registration through their official websites or partner platforms.\n";
            break;
        case 2:
            cout << "You can directly walk in and register for the job fair on-site. Some job fairs may also have on-the-spot registration.\n";
            break;
        case 3:
            cout << "For group registrations, some job fairs offer discounts or provide special accommodations for larger groups.\n";
            break;
        case 4:
            cout << "Returning to Local Job Fair and Interviews...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void prepareForInterviews() {
    int choice;
    cout << "Interview Preparation Options:\n";
    cout << "1. Research Employers and Job Roles\n";
    cout << "2. Practice Common Interview Questions\n";
    cout << "3. Prepare a Professional Resume and Portfolio\n";
    cout << "4. Back to Local Job Fair and Interviews\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Before attending the job fair, research the employers and job roles they are offering.\n";
            break;
        case 2:
            cout << "Prepare for common interview questions that employers usually ask. This will help you feel more confident during the interview.\n";
            break;
        case 3:
            cout << "Make sure your resume is up to date, and if applicable, bring a professional portfolio with your work samples.\n";
            break;
        case 4:
            cout << "Returning to Local Job Fair and Interviews...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void learnMoreAboutJobFairs() {
    int choice;
    cout << "Learn more about different aspects of local job fairs:\n";
    cout << "1. Benefits of Participating in Job Fairs\n";
    cout << "2. Types of Employers You Can Meet\n";
    cout << "3. Job Fair Etiquette\n";
    cout << "4. Back to Local Job Fair and Interviews\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Participating in a job fair can give you access to numerous job opportunities, network with potential employers, and enhance your career prospects.\n";
            break;
        case 2:
            cout << "You can meet a wide range of employers, from local startups to multinational corporations, as well as non-profits and government bodies.\n";
            break;
        case 3:
            cout << "Job fair etiquette includes dressing professionally, preparing questions for employers, and following up after the event.\n";
            break;
        case 4:
            cout << "Returning to Local Job Fair and Interviews...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}


void freelanceWork() {
    int choice;
    do {
        cout << "Freelance Work and Gig Economy:\n";
        cout << "1. Explore Freelance Websites\n";
        cout << "2. Learn About Freelance Opportunities\n";
        cout << "3. Build Your Freelancer Profile\n";
        cout << "4. Get Tips on Managing Freelance Work\n";
        cout << "5. Back to Job Opportunities\n";
        cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                exploreFreelanceWebsites();
                break;
            case 2:
                learnAboutFreelanceOpportunities();
                break;
            case 3:
                buildFreelancerProfile();
                break;
            case 4:
                getFreelanceWorkTips();
                break;
            case 5:
                cout << "Returning to Job Opportunities Menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);
}

void exploreFreelanceWebsites() {
    int choice;
    cout << "Which freelance website would you like to explore?\n";
    cout << "1. Upwork\n";
    cout << "2. Fiverr\n";
    cout << "3. Freelancer\n";
    cout << "4. Other Websites\n";
    cout << "5. Back to Freelance Work and Gig Economy\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Upwork offers freelance opportunities across various fields such as programming, marketing, and writing.\n";
            break;
        case 2:
            cout << "Fiverr is a great platform to offer services starting at $5. Popular gigs include graphic design, content writing, and video editing.\n";
            break;
        case 3:
            cout << "Freelancer allows you to bid on projects across diverse categories, including IT, engineering, and marketing.\n";
            break;
        case 4:
            cout << "There are other freelance platforms like Toptal, Guru, and PeoplePerHour.\n";
            break;
        case 5:
            cout << "Returning to Freelance Work and Gig Economy...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void learnAboutFreelanceOpportunities() {
    int choice;
    cout << "Which freelance opportunity are you interested in?\n";
    cout << "1. Writing\n";
    cout << "2. Design\n";
    cout << "3. Data Entry\n";
    cout << "4. Tech Support\n";
    cout << "5. Back to Freelance Work and Gig Economy\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Freelance writing opportunities are abundant, including blog writing, content creation, and copywriting.\n";
            break;
        case 2:
            cout << "Graphic designers and UI/UX designers are in high demand on freelance platforms for website design, branding, and creative services.\n";
            break;
        case 3:
            cout << "Data entry roles are common in the freelance world, often involving tasks like transcribing, sorting, and inputting information.\n";
            break;
        case 4:
            cout << "Tech support freelancers provide troubleshooting services, IT consultations, and tech-related assistance remotely.\n";
            break;
        case 5:
            cout << "Returning to Freelance Work and Gig Economy...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void buildFreelancerProfile() {
    int choice;
    cout << "How would you like to build your freelancer profile?\n";
    cout << "1. Creating a Portfolio\n";
    cout << "2. Writing a Strong Bio\n";
    cout << "3. Setting Competitive Rates\n";
    cout << "4. Back to Freelance Work and Gig Economy\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Build a strong portfolio by showcasing your previous work, including samples of writing, design, or any relevant project.\n";
            break;
        case 2:
            cout << "Write a bio that highlights your expertise, experience, and the types of services you offer. Be clear and concise.\n";
            break;
        case 3:
            cout << "Research industry rates and set competitive pricing based on your experience, market demand, and skill level.\n";
            break;
        case 4:
            cout << "Returning to Freelance Work and Gig Economy...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}

void getFreelanceWorkTips() {
    int choice;
    cout << "Select a tip for managing freelance work:\n";
    cout << "1. Time Management for Freelancers\n";
    cout << "2. Client Communication Best Practices\n";
    cout << "3. Managing Multiple Freelance Projects\n";
    cout << "4. Back to Freelance Work and Gig Economy\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "Time management is essential. Use tools like Trello or Asana to track tasks and deadlines.\n";
            break;
        case 2:
            cout << "Effective client communication helps ensure clear expectations. Always be prompt and professional in your responses.\n";
            break;
        case 3:
            cout << "If you're juggling multiple projects, prioritize tasks and set realistic deadlines to avoid overloading yourself.\n";
            break;
        case 4:
            cout << "Returning to Freelance Work and Gig Economy...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}


void skillDevelopmentPrograms1() {
    int choice;
    do {
        cout << "\n--- Skill Development Programs ---" << endl;
        cout << "1. Pradhan Mantri Kaushal Vikas Yojana (PMKVY)\n";
        cout << "2. National Skill Development Corporation (NSDC)\n";
        cout << "3. Online Learning Platforms\n";
        cout << "4. Back to Employment Menu\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                pmkvyProgram();
                break;
            case 2:
                nsdcProgram();
                break;
            case 3:
                onlineLearningPlatforms();
                break;
            case 4:
                cout << "Returning to Employment Menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);
}

void pmkvyProgram() {
    int choice;
    do {
        cout << "Pradhan Mantri Kaushal Vikas Yojana (PMKVY):\n";
        cout << "1. Learn About PMKVY\n";
        cout << "2. Explore Sectors and Training Programs\n";
        cout << "3. Find Certified Training Centers\n";
        cout << "4. Application Process\n";
        cout << "5. Back to Job Opportunities\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                learnAboutPMKVY();
                break;
            case 2:
                exploreTrainingSectors();
                break;
            case 3:
                findTrainingCenters();
                break;
            case 4:
                learnApplicationProcess();
                break;
            case 5:
                cout << "Returning to Job Opportunities Menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);
}

void learnAboutPMKVY() {
    cout << "The Pradhan Mantri Kaushal Vikas Yojana (PMKVY) is a skill development initiative aimed at empowering the youth by providing them with industry-relevant training and certification.\n";
    cout << "PMKVY is a government-sponsored scheme that aims to enhance the employability of youth in sectors like retail, IT, construction, and more.\n";
    cout << "The program focuses on making youth job-ready by offering certification courses at various levels, from basic to advanced.\n";
}

void exploreTrainingSectors() {
    int choice;
    cout << "Which sector would you like to explore for training programs?\n";
    cout << "1. Retail\n";
    cout << "2. Construction\n";
    cout << "3. Information Technology (IT)\n";
    cout << "4. Other Sectors\n";
    cout << "5. Back to PMKVY Menu\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "PMKVY offers training in retail management, sales, customer service, and more. This sector prepares individuals for roles in sales, marketing, and retail operations.\n";
            break;
        case 2:
            cout << "In the construction sector, PMKVY provides training in fields like carpentry, plumbing, welding, and masonry. This training helps individuals find work in construction projects.\n";
            break;
        case 3:
            cout << "PMKVY also focuses on the IT sector, offering courses in software development, networking, digital marketing, and more to equip individuals with technical skills.\n";
            break;
        case 4:
            cout << "PMKVY covers various other sectors, including healthcare, beauty and wellness, agriculture, and manufacturing. Explore the program's diverse offerings.\n";
            break;
        case 5:
            cout << "Returning to PMKVY Menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}



// Contact local officers for information
void findTrainingCenters() {
    cout << "To find certified PMKVY training centers, you can visit the official PMKVY website or check with local government offices.\n";
    cout << "Training centers are located in various regions across the country and are certified to deliver PMKVY's industry-specific courses.\n";
    cout << "To locate a training center near you, you can search by state, district, or sector on the official portal or contact local skill development officers.\n";

    // Nested switch for finding a training center
    int choice;
    cout << "\nChoose an option for locating a training center:\n";
    cout << "1. Search by State\n";
    cout << "2. Search by District\n";
    cout << "3. Search by Sector\n";
    cout << "4. Contact Local Skill Development Officers\n";
    cout << "5. Exit\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            searchByState();
            break;
        case 2:
            searchByDistrict();
            break;
        case 3:
            searchBySector();
            break;
        case 4:
            contactLocalOfficers();
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Exiting...\n";
    }
}

// Search by state
void searchByState() {
    cout << "To search by state, visit the official PMKVY website and select your state from the dropdown menu.\n";
    cout << "You will be shown a list of certified training centers in your selected state.\n";
}

// Search by district
void searchByDistrict() {
    cout << "To search by district, you can use the official PMKVY portal and enter your district name.\n";
    cout << "The website will show you training centers available in your district.\n";
}

// Search by sector
void searchBySector() {
    cout << "To search by sector, visit the PMKVY portal and choose the relevant industry sector (e.g., IT, retail, healthcare, etc.).\n";
    cout << "The website will list training centers certified for that specific sector.\n";
}

// Contact local officers for information
void contactLocalOfficers() {
    cout << "To contact local skill development officers, visit your nearest government office or contact the PMKVY helpline.\n";
    cout << "You can inquire about training centers available in your area or get more details about available courses.\n";
}

void nsdcProgram() {
    int choice;
    do {
        cout << "National Skill Development Corporation (NSDC):\n";
        cout << "1. Learn About NSDC\n";
        cout << "2. Explore Available Courses\n";
        cout << "3. Find Training Centers\n";
        cout << "4. Application Process\n";
        cout << "5. Back to Job Opportunities Menu\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                learnAboutNSDC();
                break;
            case 2:
                exploreCourses();
                break;
            case 3:
                findTrainingCenters();
                break;
            case 4:
                learnApplicationProcess();
                break;
            case 5:
                cout << "Returning to Job Opportunities Menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);
}

void learnAboutNSDC() {
    cout << "The National Skill Development Corporation (NSDC) is a public-private partnership aimed at promoting skill development in India.\n";
    cout << "NSDC works towards providing industry-relevant skill training, certifications, and improving the employability of the youth.\n";
    cout << "It offers a variety of courses in both technical and non-technical domains to help individuals gain market-ready skills.\n";
}

void exploreCourses() {
    int choice;
    cout << "Which category of courses would you like to explore?\n";
    cout << "1. Technical Courses\n";
    cout << "2. Non-Technical Courses\n";
    cout << "3. Other Courses\n";
    cout << "4. Back to NSDC Menu\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            cout << "NSDC offers a wide range of technical courses in fields like Information Technology (IT), Electronics, Mechanical Engineering, and more.\n";
            cout << "Courses include software development, data analytics, electrical engineering, and automotive skills.\n";
            break;
        case 2:
            cout << "NSDC offers various non-technical courses in sectors like retail, hospitality, healthcare, and soft skills development.\n";
            cout << "Courses include customer service, sales, communication skills, and leadership training.\n";
            break;
        case 3:
            cout << "NSDC also offers courses in other sectors like agriculture, beauty & wellness, and logistics.\n";
            break;
        case 4:
            cout << "Returning to NSDC Menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}


void learnApplicationProcess() {
    cout << "To apply for NSDC training programs, follow these steps:\n";
    cout << "1. Visit the official NSDC website (nsdcindia.org) to explore available courses and training centers.\n";
    cout << "2. Choose the course you wish to pursue based on your skills and career interests.\n";
    cout << "3. Register on the website by providing your personal details and educational background.\n";
    cout << "4. Once registered, you will receive information about available training centers and schedules.\n";
    cout << "5. Complete the course and certification process to become a skilled professional.\n";
}


void onlineLearningPlatforms() {
    int choice;
    do {
        cout << "Online Learning Platforms:\n";
        cout << "1. Learn About Online Learning Platforms\n";
        cout << "2. Explore Free Courses\n";
        cout << "3. Explore Paid Courses\n";
        cout << "4. Explore Specific Platforms\n";
        cout << "5. Back to Job Opportunities Menu\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                learnAboutOnlinePlatforms();
                break;
            case 2:
                exploreFreeCourses();
                break;
            case 3:
                explorePaidCourses();
                break;
            case 4:
                exploreSpecificPlatforms();
                break;
            case 5:
                cout << "Returning to Job Opportunities Menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);
}

void learnAboutOnlinePlatforms() {
    cout << "Online learning platforms offer a variety of courses that can help you build both technical and soft skills.\n";
    cout << "These platforms provide access to high-quality content from top instructors, universities, and professionals.\n";
    cout << "Courses can range from beginner to advanced levels and are often available with flexible schedules.\n";
}

void exploreFreeCourses() {
    cout << "Free courses are available on various platforms for anyone looking to learn new skills.\n";
    cout << "Some popular options for free courses include:\n";
    cout << "   - Coursera (Free courses from top universities, audit courses without a certificate).\n";
    cout << "   - edX (Offers free courses with an option to pay for a certificate).\n";
    cout << "   - Udemy (Some free courses available on various topics like programming, marketing, etc.).\n";
    cout << "   - Khan Academy (Free educational content, mainly for school-level learning).\n";
}

void explorePaidCourses() {
    cout << "Paid courses are often more comprehensive and offer certifications that can boost your resume.\n";
    cout << "Some platforms offering paid courses include:\n";
    cout << "   - Coursera (Paid courses from prestigious institutions like Stanford, University of Michigan, etc.).\n";
    cout << "   - LinkedIn Learning (A wide range of professional courses with certifications).\n";
    cout << "   - Udemy (Many affordable paid courses covering a variety of topics from programming to personal development).\n";
    cout << "   - Pluralsight (Specialized in technology-related courses with a subscription model).\n";
}

void exploreSpecificPlatforms() {
    int platformChoice;
    cout << "Which platform would you like to explore?\n";
    cout << "1. Coursera\n";
    cout << "2. Udemy\n";
    cout << "3. LinkedIn Learning\n";
    cout << "4. edX\n";
    cout << "5. Back to Online Learning Menu\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> platformChoice;
        cout<<"------------------------------------------"<<endl;

    switch (platformChoice) {
        case 1:
            cout << "Coursera offers a wide variety of online courses from top universities like Stanford, Yale, and University of Michigan.\n";
            cout << "Courses are available in various fields such as technology, business, data science, and more.\n";
            cout << "Some courses are free to audit, while others require payment for certification.\n";
            break;
        case 2:
            cout << "Udemy provides a vast selection of courses on almost any topic you can think of, including programming, business, and design.\n";
            cout << "Courses are created by independent instructors, and prices vary depending on the course.\n";
            break;
        case 3:
            cout << "LinkedIn Learning offers courses focusing on business, tech, and creative skills.\n";
            cout << "It's a subscription-based platform that provides access to all its courses.\n";
            cout << "You can also showcase completed certifications directly on your LinkedIn profile.\n";
            break;
        case 4:
            cout << "edX offers online courses from universities like Harvard, MIT, and Georgetown.\n";
            cout << "Many courses are available for free, but certificates or degrees require a fee.\n";
            break;
        case 5:
            cout << "Returning to Online Learning Menu...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
    }
}


void governmentSchemes() {
    int choice;
    do {
        cout << "\n--- Government Employment Schemes ---" << endl;
        cout << "1. MGNREGA (Mahatma Gandhi National Rural Employment Guarantee Act)\n";
        cout << "2. PMEGP (Prime Minister's Employment Generation Programme)\n";
        cout << "3. Atal Mission for Rejuvenation and Urban Transformation (AMRUT)\n";
        cout << "4. Back to Employment Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                mgnregaScheme();
                break;
            case 2:
                pmegpScheme();
                break;
            case 3:
                amrutScheme();
                break;
            case 4:
                cout << "Returning to Employment Menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);
}

void mgnregaScheme() {
    int choice;
    do {
        cout << "MGNREGA (Mahatma Gandhi National Rural Employment Guarantee Act):\n";
        cout << "1. Overview of MGNREGA\n";
        cout << "2. How to Register for MGNREGA\n";
        cout << "3. Types of Work Under MGNREGA\n";
        cout << "4. Benefits of MGNREGA\n";
        cout << "5. MGNREGA Payment Process\n";
        cout << "6. Back to Job Opportunities Menu\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                mgnregaOverview();
                break;
            case 2:
                mgnregaRegistration();
                break;
            case 3:
                mgnregaWorkTypes();
                break;
            case 4:
                mgnregaBenefits();
                break;
            case 5:
                mgnregaPaymentProcess();
                break;
            case 6:
                cout << "Returning to Job Opportunities Menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 6);
}

void mgnregaOverview() {
    cout << "MGNREGA aims to provide 100 days of guaranteed wage employment in rural areas for adult members of rural households.\n";
    cout << "It focuses on creating rural infrastructure and providing employment opportunities for marginalized communities.\n";
    cout << "The scheme is a key part of rural development and poverty alleviation in India.\n";
    cout << "Eligible individuals can register with their local gram panchayat and seek employment under this program.\n";
}

void mgnregaRegistration() {
    cout << "To register for MGNREGA, follow these steps:\n";
    cout << "   1. Visit your local Gram Panchayat or its website (if available).\n";
    cout << "   2. Fill out the registration form with your personal details.\n";
    cout << "   3. Provide documents such as proof of residence, age, and photographs as required.\n";
    cout << "   4. Once registered, you will receive a job card, which is necessary for work allocation.\n";
    cout << "   5. Registration can also be done online through the official MGNREGA website or mobile app in some states.\n";
}

void mgnregaWorkTypes() {
    cout << "MGNREGA offers a variety of work opportunities to individuals, such as:\n";
    cout << "   1. Construction of rural infrastructure like roads, wells, and ponds.\n";
    cout << "   2. Water conservation and water harvesting projects.\n";
    cout << "   3. Afforestation and tree plantation activities.\n";
    cout << "   4. Irrigation channels and rural electrification projects.\n";
    cout << "   5. Maintenance of rural assets like school buildings and public facilities.\n";
    cout << "   6. Other works like social forestry, rural sanitation, and flood protection.\n";
}

void mgnregaBenefits() {
    cout << "The benefits of MGNREGA include:\n";
    cout << "   1. Guaranteed 100 days of wage employment per year to each eligible household.\n";
    cout << "   2. Rural infrastructure development through the construction of roads, water conservation structures, and more.\n";
    cout << "   3. Poverty alleviation by providing livelihood opportunities in rural areas.\n";
    cout << "   4. Empowerment of women, as at least one-third of the workers employed under the scheme must be women.\n";
    cout << "   5. Strengthening of local economies through the creation of jobs and rural infrastructure.\n";
}

void mgnregaPaymentProcess() {
    cout << "The payment process for MGNREGA workers involves the following steps:\n";
    cout << "   1. Wages are paid based on the number of days worked and the minimum wage rates fixed by the government.\n";
    cout << "   2. Payments are usually made through bank accounts or post-office accounts linked to the worker's job card.\n";
    cout << "   3. Workers can track their payment status on the official MGNREGA website or through the mobile app.\n";
    cout << "   4. Payments are made on a weekly or fortnightly basis, depending on the completion of work and verification.\n";
    cout << "   5. Delays in payment can be reported to the concerned authorities through the official grievance redressal system.\n";
}


void pmegpScheme() {
    int choice;
    do {
        cout << "PMEGP (Prime Minister's Employment Generation Programme):\n";
        cout << "1. Overview of PMEGP\n";
        cout << "2. Eligibility Criteria for PMEGP\n";
        cout << "3. Financial Assistance and Subsidy\n";
        cout << "4. Application Process\n";
        cout << "5. Benefits of PMEGP\n";
        cout << "6. Back to Job Opportunities Menu\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                pmegpOverview();
                break;
            case 2:
                pmegpEligibility();
                break;
            case 3:
                pmegpFinancialAssistance();
                break;
            case 4:
                pmegpApplicationProcess();
                break;
            case 5:
                pmegpBenefits();
                break;
            case 6:
                cout << "Returning to Job Opportunities Menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 6);
}

void pmegpOverview() {
    cout << "PMEGP is a flagship scheme aimed at generating self-employment opportunities through the establishment of small businesses.\n";
    cout << "It is designed to provide financial assistance to individuals to set up new micro-enterprises and promote entrepreneurship in rural and urban areas.\n";
    cout << "The scheme is implemented by the Ministry of Micro, Small and Medium Enterprises (MSME) and is applicable to both rural and urban areas.\n";
}

void pmegpEligibility() {
    cout << "Eligibility criteria for PMEGP are as follows:\n";
    cout << "   1. Any individual above the age of 18 years is eligible.\n";
    cout << "   2. The individual should not be involved in any existing business.\n";
    cout << "   3. Priority is given to women, SC/ST, OBC, and differently-abled individuals.\n";
    cout << "   4. The applicant should have a minimum educational qualification of 8th grade.\n";
    cout << "   5. The applicant must not be a defaulter in any financial institution.\n";
}

void pmegpFinancialAssistance() {
    cout << "The financial assistance provided under PMEGP includes:\n";
    cout << "   1. The scheme provides subsidy for setting up small-scale industries and service-oriented enterprises.\n";
    cout << "   2. The subsidy is provided as a percentage of the project cost, depending on the location and category of the applicant.\n";
    cout << "   3. The maximum project cost allowed under PMEGP is Rs. 25 lakh for manufacturing units and Rs. 10 lakh for service units.\n";
    cout << "   4. The subsidy varies from 15% to 35% of the project cost depending on the category (urban/rural, general/special category).\n";
    cout << "   5. The remaining cost is provided as a loan from a recognized bank or financial institution.\n";
}

void pmegpApplicationProcess() {
    cout << "The application process for PMEGP involves the following steps:\n";
    cout << "   1. Prepare a project proposal including details of the business, cost estimates, and financial projections.\n";
    cout << "   2. Submit the application through the official PMEGP online portal or to the District Industries Centre (DIC).\n";
    cout << "   3. The application will be reviewed and scrutinized by a screening committee.\n";
    cout << "   4. If the proposal is approved, the applicant will be required to approach a bank for the loan.\n";
    cout << "   5. Upon approval of the loan, the subsidy amount is disbursed, and the applicant can proceed with setting up the business.\n";
}

void pmegpBenefits() {
    cout << "The benefits of PMEGP include:\n";
    cout << "   1. Financial assistance for setting up new small enterprises with minimal interest rates on loans.\n";
    cout << "   2. Support for skill development and entrepreneurship training to help individuals run their businesses.\n";
    cout << "   3. Employment generation by promoting micro-enterprises and self-employment.\n";
    cout << "   4. Increased access to formal credit, especially for women, youth, and marginalized communities.\n";
    cout << "   5. Support for rural development by creating businesses that contribute to local economies.\n";
}


void amrutScheme() {
    int choice;
    do {
        cout << "Atal Mission for Rejuvenation and Urban Transformation (AMRUT):\n";
        cout << "1. Overview of AMRUT\n";
        cout << "2. AMRUT Job Opportunities\n";
        cout << "3. Benefits of AMRUT Scheme\n";
        cout << "4. Key Urban Sectors Supported by AMRUT\n";
        cout << "5. Application Process for AMRUT Projects\n";
        cout << "6. Back to Job Opportunities Menu\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                amrutOverview();
                break;
            case 2:
                amrutJobOpportunities();
                break;
            case 3:
                amrutBenefits();
                break;
            case 4:
                amrutUrbanSectors();
                break;
            case 5:
                amrutApplicationProcess();
                break;
            case 6:
                cout << "Returning to Job Opportunities Menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 6);
}

void amrutOverview() {
    cout << "AMRUT (Atal Mission for Rejuvenation and Urban Transformation) is a flagship program of the Government of India aimed at ensuring basic infrastructure services in cities and towns.\n";
    cout << "The mission focuses on providing efficient and sustainable infrastructure, enhancing urban planning, and transforming cities into smart cities.\n";
    cout << "It is designed to improve water supply, sewage, urban transportation, and green spaces in urban areas to make them more livable and attractive.\n";

    // Nested switch for sub-tasks
    int choice;
    cout << "\nChoose a task:\n";
    cout << "1. Mission Focus\n";
    cout << "2. Water Supply\n";
    cout << "3. Urban Transportation\n";
    cout << "4. Green Spaces\n";
    cout << "5. Exit\n";

    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            amrutMissionFocus();
            break;
        case 2:
            amrutWaterSupply();
            break;
        case 3:
            amrutUrbanTransportation();
            break;
        case 4:
            amrutGreenSpaces();
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Exiting...\n";
    }
}

// Mission Focus of AMRUT
void amrutMissionFocus() {
    cout << "AMRUT focuses on:\n";
    cout << "   1. Providing basic infrastructure to urban areas.\n";
    cout << "   2. Enhancing urban planning and transforming cities into smart cities.\n";
    cout << "   3. Sustainable urban development.\n";
    cout << "   4. Ensuring efficient service delivery in cities and towns.\n";
    cout << "   5. Making urban areas more livable and attractive.\n";
}

// Water Supply under AMRUT
void amrutWaterSupply() {
    cout << "AMRUT aims to improve water supply by:\n";
    cout << "   1. Ensuring adequate water supply to urban areas.\n";
    cout << "   2. Improving water treatment and distribution systems.\n";
    cout << "   3. Reducing water wastage through better infrastructure.\n";
    cout << "   4. Promoting water conservation and rainwater harvesting.\n";
    cout << "   5. Making water available for all urban households.\n";
}

// Urban Transportation under AMRUT
void amrutUrbanTransportation() {
    cout << "AMRUT focuses on improving urban transportation by:\n";
    cout << "   1. Enhancing public transportation systems (buses, metro, etc.).\n";
    cout << "   2. Improving road infrastructure and traffic management.\n";
    cout << "   3. Promoting non-motorized transport (cycling, walking).\n";
    cout << "   4. Reducing traffic congestion and pollution.\n";
    cout << "   5. Making transportation safer and more efficient.\n";
}

// Green Spaces under AMRUT
void amrutGreenSpaces() {
    cout << "AMRUT aims to create more green spaces by:\n";
    cout << "   1. Developing parks and playgrounds in urban areas.\n";
    cout << "   2. Ensuring better urban sanitation and cleanliness.\n";
    cout << "   3. Promoting sustainable urban landscaping.\n";
    cout << "   4. Making urban spaces more eco-friendly and enjoyable.\n";
    cout << "   5. Increasing the green cover in cities to combat pollution.\n";
}

void amrutJobOpportunities() {
    cout << "AMRUT creates a variety of employment opportunities in urban infrastructure projects, including:\n";
    cout << "   1. Urban planning roles for developing smart cities and urban regeneration strategies.\n";
    cout << "   2. Construction-related jobs for the development of water supply systems, sewerage networks, and green spaces.\n";
    cout << "   3. Project management positions to oversee AMRUT projects and ensure timely execution.\n";
    cout << "   4. Technical roles in areas such as engineering, data analysis, and environmental sustainability.\n";
    cout << "You can look for job postings on national job portals, as well as in local government job boards related to AMRUT projects.\n";
}

void amrutBenefits() {
    cout << "The AMRUT scheme offers several benefits to both cities and citizens, such as:\n";
    cout << "   1. Employment generation through urban infrastructure development.\n";
    cout << "   2. Improved basic services such as water supply, sanitation, and sewage systems.\n";
    cout << "   3. Enhanced quality of life through well-maintained urban spaces and green areas.\n";
    cout << "   4. Increased focus on sustainability and resilience in urban development.\n";
    cout << "   5. Development of smart cities and improved urban governance and planning.\n";
}

void amrutUrbanSectors() {
    cout << "AMRUT focuses on the following key urban sectors:\n";
    cout << "   1. Water Supply and Waste Water Management - Ensuring adequate water supply and improving sewage systems.\n";
    cout << "   2. Urban Transport - Promoting public transportation systems, non-motorized transport, and traffic management.\n";
    cout << "   3. Green Spaces - Development of parks, gardens, and open spaces to improve urban living conditions.\n";
    cout << "   4. Storm Water Drainage - Constructing systems to handle rainwater and prevent flooding.\n";
    cout << "   5. Rejuvenation of Heritage Sites - Preserving and enhancing the cultural and historical importance of cities.\n";
}

void amrutApplicationProcess() {
    cout << "The application process for AMRUT projects generally involves:\n";
    cout << "   1. Proposal Submission: Cities submit detailed proposals for infrastructure development under AMRUT, which includes project cost estimates and planning details.\n";
    cout << "   2. Project Approval: Proposals are reviewed and approved by the Ministry of Housing and Urban Affairs (MoHUA).\n";
    cout << "   3. Implementation: Once approved, the project enters the implementation phase, where various contractors and stakeholders are involved.\n";
    cout << "   4. Monitoring and Evaluation: Ongoing monitoring and evaluation of the project progress to ensure it meets timelines and standards.\n";
    cout << "   5. Employment: During the implementation phase, job opportunities are available in various sectors like construction, project management, and urban planning.\n";
}


void resumeBuildingSupport() {
    int choice;
    do {
        cout << "\n--- Resume Building Support ---" << endl;
        cout << "1. Free Resume Templates\n";
        cout << "2. Resume Building Workshops\n";
        cout << "3. Online Resume Building Tools\n";
        cout << "4. Back to Employment Menu\n";
        cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                freeResumeTemplates();
                break;
            case 2:
                resumeBuildingWorkshops();
                break;
            case 3:
                onlineResumeTools();
                break;
            case 4:
                cout << "Returning to Employment Menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);
}

void freeResumeTemplates() {
    int choice;
    do {
        cout << "Free Resume Templates:\n";
        cout << "1. Overview of Free Resume Templates\n";
        cout << "2. Websites Offering Free Resume Templates\n";
        cout << "3. Customization Options for Templates\n";
        cout << "4. Tips for Creating a Professional Resume\n";
        cout << "5. Back to Job Opportunities Menu\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                freeResumeOverview();
                break;
            case 2:
                freeResumeWebsites();
                break;
            case 3:
                freeResumeCustomization();
                break;
            case 4:
                freeResumeTips();
                break;
            case 5:
                cout << "Returning to Job Opportunities Menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);
}

void freeResumeOverview() {
    cout << "Free resume templates are pre-designed document layouts that can help job seekers create a professional resume without needing advanced design skills.\n";
    cout << "These templates are offered by various websites and are available in different formats, such as PDF, DOCX, and editable templates for online platforms.\n";
    cout << "They save time by providing ready-to-use structures, allowing you to simply add your personal details, qualifications, and work experience.\n";

    // Nested switch for sub-tasks
    int choice;
    cout << "\nChoose a task:\n";
    cout << "1. Display benefits of using templates\n";
    cout << "2. Exit\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            displayTemplateBenefits();
            break;
        case 2:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Exiting...\n";
    }
}

// Display Benefits of Free Resume Templates
void displayTemplateBenefits() {
    cout << "Benefits of using free resume templates include:\n";
    cout << "   1. Saves time: Quickly create a professional-looking resume.\n";
    cout << "   2. Easy to use: No need for graphic design skills.\n";
    cout << "   3. Professional structure: Follow industry-standard resume formats.\n";
    cout << "   4. Customizable: Adapt to specific job requirements.\n";
    cout << "   5. Accessible: Free access on various platforms.\n";
}

// Function for Free Resume Websites
void freeResumeWebsites() {
    cout << "Websites offering free resume templates include:\n";
    cout << "   1. Canva: Offers a variety of free templates with customization options.\n";
    cout << "   2. Novoresume: Provides free templates optimized for Applicant Tracking Systems (ATS).\n";
    cout << "   3. Zety: Offers a mix of free and premium templates.\n";
    cout << "   4. Microsoft Word: Many free templates available.\n";
    cout << "   5. Google Docs: Accessible and easy to edit.\n";

    // Nested switch for sub-tasks
    int choice;
    cout << "\nChoose a task:\n";
    cout << "1. Compare resume platforms\n";
    cout << "2. Exit\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            compareResumePlatforms();
            break;
        case 2:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Exiting...\n";
    }
}

// Compare Resume Platforms
void compareResumePlatforms() {
    cout << "Comparing these resume platforms:\n";
    cout << "   1. Canva: Best for creative designs.\n";
    cout << "   2. Novoresume: Great for ATS optimization.\n";
    cout << "   3. Zety: Flexible and customizable.\n";
    cout << "   4. Microsoft Word: Convenient if you already use Word.\n";
    cout << "   5. Google Docs: Good for collaboration.\n";
}

// Function for Free Resume Customization
void freeResumeCustomization() {
    cout << "Customization options for free resume templates include:\n";
    cout << "   1. Changing fonts: Professional fonts such as Arial, Times New Roman, Calibri.\n";
    cout << "   2. Adjusting layout: Reorganize sections like Experience, Education, etc.\n";
    cout << "   3. Adding personal branding: Include a header with your name, job title.\n";
    cout << "   4. Tailoring content: Focus on relevant skills and experience.\n";
    cout << "   5. Including a professional summary: Highlight career goals and qualifications.\n";

    // Nested switch for sub-tasks
    int choice;
    cout << "\nChoose a task:\n";
    cout << "1. Explore font options\n";
    cout << "2. Exit\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            exploreFontOptions();
            break;
        case 2:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Exiting...\n";
    }
}

// Explore Font Options for Resume Customization
void exploreFontOptions() {
    cout << "Popular font options for resumes include:\n";
    cout << "   1. Arial: Clean and modern.\n";
    cout << "   2. Times New Roman: Traditional and professional.\n";
    cout << "   3. Calibri: Contemporary alternative.\n";
    cout << "   4. Helvetica: Minimalistic and professional.\n";
    cout << "   5. Georgia: Good for online resumes.\n";
}

// Function for Free Resume Tips
void freeResumeTips() {
    cout << "Tips for creating a professional resume:\n";
    cout << "   1. Keep it concise: Limit your resume to 1 or 2 pages.\n";
    cout << "   2. Focus on achievements: Highlight measurable outcomes.\n";
    cout << "   3. Use keywords: Include industry-specific terms for ATS.\n";
    cout << "   4. Proofread: Check for spelling and grammar mistakes.\n";
    cout << "   5. Tailor for each application: Customize your resume for each job.\n";

    // Nested switch for sub-tasks
    int choice;
    cout << "\nChoose a task:\n";
    cout << "1. Emphasize achievements\n";
    cout << "2. Exit\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            emphasizeAchievements();
            break;
        case 2:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Exiting...\n";
    }
}

// Emphasize Achievements in Resume
void emphasizeAchievements() {
    cout << "How to emphasize achievements on your resume:\n";
    cout << "   1. Quantify results: Use numbers to show the impact of your work.\n";
    cout << "   2. Highlight awards: Mention recognitions and accolades.\n";
    cout << "   3. Showcase leadership: Demonstrate leadership in projects.\n";
    cout << "   4. Include relevant metrics: Focus on key performance indicators.\n";
    cout << "   5. Use action verbs: Start bullet points with verbs like 'achieved', 'managed'.\n";
}

void resumeBuildingWorkshops() {
    int choice;
    do {
        cout << "Resume Building Workshops:\n";
        cout << "1. Overview of Resume Building Workshops\n";
        cout << "2. NGOs and Local Community Centers Offering Workshops\n";
        cout << "3. What to Expect in a Resume Building Workshop\n";
        cout << "4. Tips for Making the Most of a Resume Workshop\n";
        cout << "5. Back to Job Opportunities Menu\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                resumeWorkshopOverview();
                break;
            case 2:
                resumeWorkshopOrganizations();
                break;
            case 3:
                resumeWorkshopExpectations();
                break;
            case 4:
                resumeWorkshopTips();
                break;
            case 5:
                cout << "Returning to Job Opportunities Menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);
}

void resumeWorkshopOverview() {
    cout << "Resume building workshops are events or sessions that help job seekers create, refine, and optimize their resumes.\n";
    cout << "These workshops are usually hosted by community organizations, NGOs, career counselors, or local job support groups.\n";
    cout << "In these workshops, participants learn how to structure their resumes, highlight key skills, and tailor their resumes for specific job applications.\n";
}

void resumeWorkshopOrganizations() {
    cout << "NGOs and local community centers often organize resume-building workshops. Some of the prominent organizations include:\n";
    cout << "   1. Local NGOs: Non-governmental organizations often hold free or low-cost workshops for job seekers in need.\n";
    cout << "   2. Government Employment Offices: Government-backed agencies provide resume workshops as part of their career services.\n";
    cout << "   3. Local Community Centers: These centers often host resume writing and job search skill workshops for individuals in their communities.\n";
    cout << "   4. Colleges and Universities: Many educational institutions offer resume-building workshops to alumni and students seeking employment.\n";
    cout << "   5. Career Counseling Centers: These centers focus on helping individuals polish their resumes and improve their chances of landing interviews.\n";
}

void resumeWorkshopExpectations() {
    cout << "When attending a resume-building workshop, you can expect the following:\n";
    cout << "   1. Professional Guidance: Career coaches or experts will review your resume and offer constructive feedback.\n";
    cout << "   2. Hands-on Assistance: Workshops usually provide the opportunity to update or create your resume during the session.\n";
    cout << "   3. Peer Collaboration: You may work with other participants to share tips and refine each other resumes.\n";
    cout << "   4. Resume Template Resources: Many workshops provide free resume templates or examples to help you get started.\n";
    cout << "   5. Networking: You might also meet others in similar job-hunting situations, helping to expand your professional network.\n";
}

void resumeWorkshopTips() {
    cout << "Tips for making the most of a resume-building workshop:\n";
    cout << "   1. Come Prepared: Bring a copy of your current resume, a list of your achievements, and any job descriptions you're interested in.\n";
    cout << "   2. Be Open to Feedback: Workshops are meant to help you improve, so be open to suggestions for improving your resume's structure and content.\n";
    cout << "   3. Ask Questions: Dont hesitate to ask the facilitators for clarification or advice on how to tailor your resume for specific job roles.\n";
    cout << "   4. Take Notes: Make sure to take notes during the workshop so you can remember the tips and recommendations shared by the experts.\n";
    cout << "   5. Follow Up: If you receive a resume review, make sure to follow up with the coach or mentor after the session for further advice.\n";
}


void onlineResumeTools() {
    int choice;
    do {
        cout << "Online Resume Building Tools:\n";
        cout << "1. Overview of Online Resume Building Tools\n";
        cout << "2. Popular Online Resume Tools\n";
        cout << "3. Features of Online Resume Tools\n";
        cout << "4. Tips for Using Online Resume Builders\n";
        cout << "5. Back to Job Opportunities Menu\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                resumeToolsOverview();
                break;
            case 2:
                popularResumeTools();
                break;
            case 3:
                resumeToolsFeatures();
                break;
            case 4:
                resumeToolsTips();
                break;
            case 5:
                cout << "Returning to Job Opportunities Menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);
}

void resumeToolsOverview() {
    cout << "Online resume-building tools are web-based platforms that help individuals create professional resumes.\n";
    cout << "These tools provide templates, formatting options, and content suggestions, making it easier to build a polished resume without needing advanced design skills.\n";
    cout << "Many of these platforms are free to use, offering downloadable resumes in various formats, such as PDF or Word, upon completion.\n";
}

void popularResumeTools() {
    cout << "Some of the most popular online resume-building tools include:\n";
    cout << "   1. Resume.com: A user-friendly platform that helps you create and download your resume for free.\n";
    cout << "   2. ResumeGenius: Offers a step-by-step guide to building your resume with customizable templates.\n";
    cout << "   3. Canva: Known for its wide variety of visually appealing templates, Canva allows you to build and customize your resume easily.\n";
    cout << "   4. Novoresume: Offers personalized suggestions and guidance for building resumes, with options for both free and premium users.\n";
    cout << "   5. Zety: Provides a resume builder with customizable templates and helpful tips on how to write each section of your resume.\n";
}

void resumeToolsFeatures() {
    cout << "Features of online resume-building tools include:\n";
    cout << "   1. Templates: Pre-designed layouts that save time and effort, with options for various industries.\n";
    cout << "   2. Customization: Ability to edit sections like education, work experience, skills, and more.\n";
    cout << "   3. Step-by-Step Guidance: Many tools provide prompts and suggestions for each section of the resume.\n";
    cout << "   4. Export Options: Once your resume is complete, you can download it in various formats like PDF or DOC.\n";
    cout << "   5. Easy Sharing: Some tools allow you to share your resume directly through a link or email.\n";
}

void resumeToolsTips() {
    cout << "Tips for using online resume-building tools effectively:\n";
    cout << "   1. Choose a Template that Matches Your Industry: Some templates are more suitable for creative fields, while others are better for corporate jobs.\n";
    cout << "   2. Keep It Concise: While it's tempting to include all your experiences, try to focus on the most relevant details for the job you're applying for.\n";
    cout << "   3. Use Action-Oriented Language: Ensure your resume highlights accomplishments with action verbs like 'managed,' 'led,' or 'developed.'\n";
    cout << "   4. Proofread Your Resume: Check for grammatical errors or formatting issues that could undermine your professionalism.\n";
    cout << "   5. Tailor Your Resume for Each Job: Customizing your resume for each job application improves your chances of passing through automated filters.\n";
}


void nearbyEmploymentCenters() {
    int choice;
    do {
        cout << "\n--- Nearby Employment Centers ---" << endl;
        cout << "1. District Employment Offices\n";
        cout << "2. Private Placement Agencies\n";
        cout << "3. NGO-based Employment Services\n";
        cout << "4. Back to Employment Menu\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                districtEmploymentOffices();
                break;
            case 2:
                privatePlacementAgencies();
                break;
            case 3:
                ngoBasedEmploymentServices();
                break;
            case 4:
                cout << "Returning to Employment Menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);
}

void districtEmploymentOffices() {
    int choice;
    do {
        cout << "District Employment Offices:\n";
        cout << "1. Overview of District Employment Offices\n";
        cout << "2. Services Provided by District Employment Offices\n";
        cout << "3. How to Register at District Employment Offices\n";
        cout << "4. Job Listings and Career Counseling\n";
        cout << "5. Back to Job Opportunities Menu\n";
         cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                districtEmploymentOverview();
                break;
            case 2:
                districtEmploymentServices();
                break;
            case 3:
                registerAtDistrictEmployment();
                break;
            case 4:
                jobListingsAndCounseling();
                break;
            case 5:
                cout << "Returning to Job Opportunities Menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);
}

// District employment overview
void districtEmploymentOverview() {
    cout << "District Employment Offices are government-run centers located in every district.\n";
    cout << "They provide various services to help job seekers find employment, access training opportunities, and receive career guidance.\n";
    cout << "These offices act as a resource hub for individuals looking to improve their employability and connect with local employers.\n";

    // Nested switch for services offered by district employment offices
    int choice;
    cout << "\nChoose a service you are interested in:\n";
    cout << "1. Visit District Employment Office\n";
    cout << "2. Access Job Listings\n";
    cout << "3. Receive Career Guidance\n";
    cout << "4. Access Training Opportunities\n";
    cout << "5. Exit\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            visitDistrictEmploymentOffice();
            break;
        case 2:
            accessJobListings();
            break;
        case 3:
            receiveCareerGuidance();
            break;
        case 4:
            accessTrainingOpportunities();
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Exiting...\n";
    }
}

// Visit district employment office for assistance
void visitDistrictEmploymentOffice() {
    cout << "To visit your nearest District Employment Office, locate the office in your district.\n";
    cout << "Here, you can receive personalized assistance with job searching, career counseling, and learn about available services.\n";

    // Nested switch for further assistance at the district employment office
    int choice;
    cout << "\nChoose what you'd like to do at the District Employment Office:\n";
    cout << "1. Learn More About Job Opportunities\n";
    cout << "2. Inquire About Job Availability\n";
    cout << "3. Visit Local Job Providers\n";
    cout << "4. Get Job Seeker Assistance\n";
    cout << "5. Get Interview Preparation Help\n";
    cout << "6. Register for Workshops\n";
    cout << "7. Exit\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            learnMoreAboutJobOpportunities();
            break;
        case 2:
            inquireAboutJobAvailability();
            break;
        case 3:
            visitLocalJobProviders();
            break;
        case 4:
            getJobSeekerAssistance();
            break;
        case 5:
            getInterviewPreparationHelp();
            break;
        case 6:
            registerForWorkshops();
            break;
        case 7:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Exiting...\n";
    }
}

// Access job listings available at district employment offices
void accessJobListings() {
    cout << "You can access job listings at the District Employment Office, where they maintain a list of local employment opportunities.\n";
    cout << "Job listings may include both private sector and government job openings.\n";

    // Nested switch for different actions related to job listings
    int choice;
    cout << "\nWhat would you like to do with the job listings?\n";
    cout << "1. Search for Specific Job Listings\n";
    cout << "2. Explore Private Sector Jobs\n";
    cout << "3. Explore Government Jobs\n";
    cout << "4. Exit\n";
     cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            searchForSpecificJobListings();
            break;
        case 2:
            explorePrivateSectorJobs();
            break;
        case 3:
            exploreGovernmentJobs();
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Exiting...\n";
    }
}

// Learn more about job opportunities at the district employment office
void learnMoreAboutJobOpportunities() {
    cout << "At the District Employment Office, you can learn about various job opportunities based on your skills and interests.\n";
    cout << "They provide guidance on available roles, required qualifications, and help with identifying suitable career paths.\n";

    // Nested switch for additional actions
    int choice;
    cout << "\nWould you like more details?\n";
    cout << "1. Explore Job Roles by Industry\n";
    cout << "2. Find Job Roles Based on Skills\n";
    cout << "3. Exit\n";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            exploreJobRolesByIndustry();
            break;
        case 2:
            findJobRolesBasedOnSkills();
            break;
        case 3:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Exiting...\n";
    }
}

// Inquire about job availability at district employment offices
void heapify(vector<string>& jobs, int n, int i) {
    int largest = i; // Initialize largest as root
    int left = 2 * i + 1; // Left child index
    int right = 2 * i + 2; // Right child index

    // If left child is larger than root
    if (left < n && jobs[left] > jobs[largest]) {
        largest = left;
    }

    // If right child is larger than largest
    if (right < n && jobs[right] > jobs[largest]) {
        largest = right;
    }

    // If largest is not root, swap it with the largest element and recursively heapify
    if (largest != i) {
        swap(jobs[i], jobs[largest]);
        heapify(jobs, n, largest);
    }
}

// Heap Sort function to sort the job roles
void heapSort(vector<string>& jobs) {
    int n = jobs.size();

    // Build a max heap (rearrange the array into a heap)
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(jobs, n, i);
    }

    // Extract elements from the heap one by one
    for (int i = n - 1; i >= 1; i--) {
        // Move current root to the end
        swap(jobs[0], jobs[i]);

        // Call heapify on the reduced heap
        heapify(jobs, i, 0);
    }
}

// Binary Search Algorithm to find a specific job role
int binarySearch(const vector<string>& jobRoles, const string& searchTerm) {
    int left = 0;
    int right = jobRoles.size() - 1;

    // Loop while there are elements to search
    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate the middle index

        cout << "Searching... Checking index " << mid << ": " << jobRoles[mid] << endl;

        // If the middle element is the search term, return its index
        if (jobRoles[mid] == searchTerm) {
            cout << "Found the job at index " << mid << ": " << jobRoles[mid] << endl;
            return mid;
        }

        // If the search term is smaller than the middle element, search in the left half
        if (jobRoles[mid] > searchTerm) {
            cout << "The term is smaller than " << jobRoles[mid] << ". Searching left half.\n";
            right = mid - 1;
        }
        // Otherwise, search in the right half
        else {
            cout << "The term is larger than " << jobRoles[mid] << ". Searching right half.\n";
            left = mid + 1;
        }
    }
    cout << "Job role not found.\n";
    return -1; // Job role not found
}

void inquireAboutJobAvailability() {
    cout << "At the District Employment Office, you can inquire about the availability of specific job roles.\n";
    cout << "The officers will provide information on positions that are actively recruiting in your area.\n";

    // Predefined list of available job roles
    vector<string> availableJobs = {
        "Software Engineer", "Data Analyst", "Graphic Designer", "Sales Manager", "Marketing Specialist",
        "Project Manager", "Product Designer", "HR Specialist", "Teacher", "Nurse"
    };

    // Sort the job list alphabetically using Heap Sort
    heapSort(availableJobs);

    // Displaying the sorted list of available jobs
    cout << "\nAvailable Job Roles (sorted):\n";
    for (const string& job : availableJobs) {
        cout << "- " << job << endl;
    }

    // Search for a specific job role using binary search
    cout << "\nEnter the job title you're looking for: ";
    string searchTerm;
    cin.ignore(); // To clear the input buffer
    getline(cin, searchTerm); // Read the full job title

    // Perform binary search to find the job role
    int index = binarySearch(availableJobs, searchTerm);

    if (index != -1) {
        cout << "Job role found: " << availableJobs[index] << endl;
    } else {
        cout << "Job role not found.\n";
    }

    // Nested switch for different types of job inquiries
    int choice;
    cout << "\nWhat would you like to inquire about?\n";
    cout << "1. Inquire About Full-Time Jobs\n";
    cout << "2. Inquire About Part-Time Jobs\n";
    cout << "3. Inquire About Internships\n";
    cout << "4. Exit\n";
    cout << "==========================================\n";
    cout << "Enter your choice: ";
    cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

    switch (choice) {
        case 1:
            inquireAboutFullTimeJobs();
            break;
        case 2:
            inquireAboutPartTimeJobs();
            break;
        case 3:
            inquireAboutInternships();
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Exiting...\n";
    }
}

// Visit local job providers with guidance from district employment offices
void visitLocalJobProviders() {
    cout << "The District Employment Office can provide a list of local job providers, including businesses and organizations looking to hire.\n";
    cout << "You can contact these job providers directly or visit them for further inquiries about job openings.\n";
}

// Search for specific job listings based on your preferences
void searchForSpecificJobListings() {
    cout << "Search for job listings by role, experience level, or other criteria.\n";
    cout << "Use the office resources or online portals to narrow down your job search based on your preferences.\n";
}

// Explore private sector job listings available at the district office
void explorePrivateSectorJobs() {
    cout << "Explore job listings from companies in the private sector, ranging from entry-level to managerial positions.\n";
    cout << "The District Employment Office often collaborates with private companies to provide job openings.\n";
}

// Explore government job listings available at the district office
void exploreGovernmentJobs() {
    cout << "Explore government job listings available at the District Employment Office.\n";
    cout << "These may include various roles in local, state, and central government agencies.\n";
}

// Get job seeker assistance at the district employment office
void getJobSeekerAssistance() {
    cout << "Job seeker assistance can include resume building, career counseling, and job search strategies.\n";
    cout << "The district employment office can help you improve your job search and increase your chances of finding employment.\n";
}

// Get interview preparation help at the district employment office
int linearSearch(const vector<string>& questions, const string& searchTerm) {
    for (int i = 0; i < questions.size(); i++) {
        if (questions[i].find(searchTerm) != string::npos) {
            return i; // Found the question, return the index
        }
    }
    return -1; // Not found
}

void getInterviewPreparationHelp() {
    // Predefined list of common interview questions
    vector<string> interviewQuestions = {
        "Tell me about yourself.",
        "Why should we hire you?",
        "What are your strengths and weaknesses?",
        "Where do you see yourself in five years?",
        "Why do you want to work for this company?",
        "Can you describe a challenging situation and how you handled it?"
    };

    cout << "District employment offices offer workshops and one-on-one coaching to help you prepare for interviews.\n";
    cout << "You can practice common interview questions and learn about proper interview etiquette.\n";
    cout << "Here are some common interview questions:\n";

    // Display all the common interview questions
    for (const string& question : interviewQuestions) {
        cout << "- " << question << endl;
    }

    // Prompt the user to search for a question
    cout << "Enter a keyword to search for an interview question (or type 'exit' to quit): ";
    string searchTerm;
    cin >> searchTerm;

    // If user wants to exit
    if (searchTerm == "exit") {
        cout << "Exiting interview preparation help...\n";
        return;
    }

    // Use linear search to find a matching question
    int index = linearSearch(interviewQuestions, searchTerm);
    if (index != -1) {
        cout << "Found the question: " << interviewQuestions[index] << endl;
    } else {
        cout << "No interview question found with that keyword.\n";
    }
}


// Register for workshops available at the district employment office
void registerForWorkshops() {
    cout << "The district employment office organizes workshops to improve skills like resume writing, interview preparation, and career development.\n";
    cout << "You can register for upcoming workshops that align with your career goals.\n";
}

// Explore job roles based on industry
void exploreJobRolesByIndustry() {
    cout << "Explore various job roles categorized by industry, such as IT, healthcare, retail, and manufacturing.\n";
    cout << "Each industry has unique opportunities for job seekers at various skill levels.\n";
}

// Find job roles based on your skills
void findJobRolesBasedOnSkills() {
    cout << "Find job roles that match your skills, whether it's in marketing, programming, sales, or customer service.\n";
    cout << "Use the district employment office resources to match your skills with available job roles.\n";
}

// Inquire about full-time job opportunities
void inquireAboutFullTimeJobs() {
    cout << "Full-time job roles typically offer stable income, benefits, and career advancement opportunities.\n";
    cout << "Inquire about the available full-time roles at the district employment office.\n";
}

// Inquire about part-time job opportunities
void inquireAboutPartTimeJobs() {
    cout << "Part-time jobs provide flexible work schedules and are ideal for students, freelancers, or those seeking supplemental income.\n";
    cout << "Inquire about available part-time roles at the district employment office.\n";
}

// Inquire about internship opportunities
void inquireAboutInternships() {
    cout << "Internships provide valuable hands-on experience in your field of study and can help you build a network of professional connections.\n";
    cout << "Inquire about internship opportunities at the district employment office.\n";
}
// Receive career guidance from district employment officers
void receiveCareerGuidance() {
    cout << "District Employment Offices provide career guidance to help you understand your skills, strengths, and potential career paths.\n";
    cout << "You can receive advice on resume building, interview preparation, and career development.\n";
}

// Access training opportunities through district employment offices
void accessTrainingOpportunities() {
    cout << "The District Employment Office offers information about training opportunities in various fields to improve employability.\n";
    cout << "These training programs may include skill development, vocational training, and educational workshops.\n";
}
void districtEmploymentServices() {
    cout << "Services offered by District Employment Offices include:\n";
    cout << "   1. Job Listings: Access to a wide range of job openings in your local area and beyond.\n";
    cout << "   2. Career Counseling: Professional guidance to help you choose the right career path and improve your job search strategy.\n";
    cout << "   3. Skill Training: Information on skill development programs, including vocational training and certification opportunities.\n";
    cout << "   4. Job Fairs: Some district offices organize job fairs where employers meet job seekers face-to-face.\n";
    cout << "   5. Employment Assistance: Help with resume writing, interview preparation, and other aspects of job applications.\n";
}

void registerAtDistrictEmployment() {
    cout << "To register at your local District Employment Office, follow these steps:\n";
    cout << "   1. Visit the office in person or check their official website for online registration options.\n";
    cout << "   2. Fill out an application form with your personal details, work history, and education.\n";
    cout << "   3. Submit required documents, such as proof of identity, educational qualifications, and any other relevant certificates.\n";
    cout << "   4. Upon successful registration, you may receive access to job listings, career counseling, and other resources.\n";
}

void jobListingsAndCounseling() {
    cout << "District Employment Offices offer a variety of services to help you find job opportunities and improve your career prospects:\n";
    cout << "   1. Job Listings: Browse a regularly updated database of job openings in various sectors. These listings can be accessed at the office or online.\n";
    cout << "   2. Career Counseling: Career experts are available to guide you in making informed decisions about your career, creating a job search plan, and preparing for interviews.\n";
    cout << "   3. Skill Development: Learn about available training programs that can enhance your qualifications and make you more competitive in the job market.\n";
    cout << "   4. Networking: Some district employment offices host networking events or job fairs where you can meet potential employers directly.\n";
    cout << "   5. Employment Assistance: District offices often offer free resume-writing workshops and interview preparation sessions to improve your chances of getting hired.\n";
}

// Function to simulate user login (searching via linear search)

// Function to display sorted users (using Merge Sort)
void adminMenu(const string& fileName) {
    ifstream file(fileName);
    vector<string> users;
    string line;

    // Read all users into a vector
    while (getline(file, line)) {
        users.push_back(line);
    }

    file.close();

    // Call Merge Sort to sort the users alphabetically
    merge(users, 0, users.size() - 1);

    cout << "\nRegistered Users (sorted alphabetically):\n";
    for (const string& user : users) {
        cout << user << endl;
    }
}

// Main menu

// Entry point
int main() {
    cout << "*****************************************\n" << endl;
    cout << "------------------WELCOME----------------\n" << endl;
    cout << "*****************************************\n" << endl;
    showMenu();
    end();
    return 0;
}

// End function
void end() {
    cout << endl << "*****************************************\n";
    cout << "Thank you for visiting\n";
    cout << endl << "*****************************************\n";
}

// Partition function for Quick Sort
int partition(vector<string>& agencies, int low, int high) {
    string pivot = agencies[high]; // Choosing the last element as pivot
    int i = low - 1; // Index of smaller element

    for (int j = low; j <= high - 1; j++) {
        // If current element is less than or equal to pivot
        if (agencies[j] <= pivot) {
            i++;
            swap(agencies[i], agencies[j]); // Swap elements
        }
    }
    swap(agencies[i + 1], agencies[high]); // Swap the pivot element with the element at i + 1
    return (i + 1); // Return the partition index
}
// Quick sort algorithm to sort agencies alphabetically
void quickSort(vector<string>& agencies, int low, int high) {
    if (low < high) {
        // Partition the array
        int pivot = partition(agencies, low, high);

        // Recursively sort the two halves
        quickSort(agencies, low, pivot - 1);
        quickSort(agencies, pivot + 1, high);
    }
}



// Function to display popular placement agencies
void popularPlacementAgencies() {
    vector<string> agencies = {
        "ABC Placement",
        "XYZ Recruitment",
        "Global Talent",
        "Career Pathways",
        "Elite Recruiters"
    };

    // Sorting agencies alphabetically using quick sort
    quickSort(agencies, 0, agencies.size() - 1);

    cout << "Popular Placement Agencies (sorted alphabetically):\n";
    for (const string& agency : agencies) {
        cout << "- " << agency << endl;
    }
}
void privatePlacementAgencies() {
    int choice;
    do {
        cout << "Private Placement Agencies:\n";
        cout << "1. Overview of Private Placement Agencies\n";
        cout << "2. Popular Placement Agencies\n";
        cout << "3. How to Register with a Private Placement Agency\n";
        cout << "4. Services Provided by Placement Agencies\n";
        cout << "5. Back to Job Opportunities Menu\n";
        cout << "==========================================\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "------------------------------------------\n";

        switch (choice) {
            case 1:
                privatePlacementOverview();
                break;
            case 2:
                popularPlacementAgencies();
                break;
            case 3:
                registerWithAgency();
                break;
            case 4:
                placementAgencyServices();
                break;
            case 5:
                cout << "Returning to Job Opportunities Menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);
}




void privatePlacementOverview() {
    cout << "Private placement agencies are third-party organizations that help connect job seekers with employers.\n";
    cout << "They act as intermediaries to help candidates find suitable job opportunities across various sectors, including IT, healthcare, manufacturing, and more.\n";
    cout << "These agencies generally specialize in matching candidates' skills with the requirements of hiring companies.\n";
}



void registerWithAgency() {
    cout << "To register with a private placement agency, follow these steps:\n";
    cout << "   1. Choose an agency that fits your industry and job profile.\n";
    cout << "   2. Visit the agency's website or office and fill out a registration form.\n";
    cout << "   3. Submit necessary documents such as your resume, educational qualifications, and identity proof.\n";
    cout << "   4. Some agencies may conduct an initial interview to assess your skills and job preferences.\n";
    cout << "   5. After successful registration, you will be notified about job openings that match your profile.\n";
}

void placementAgencyServices() {
    cout << "Private placement agencies offer a variety of services to job seekers, including:\n";
    cout << "   1. Job Placement: They connect candidates with job openings from multiple companies in various sectors.\n";
    cout << "   2. Resume Screening: Placement agencies can help review your resume and suggest improvements to make it more appealing to employers.\n";
    cout << "   3. Interview Preparation: Some agencies offer mock interviews and career coaching to prepare you for real-world interviews.\n";
    cout << "   4. Temporary & Permanent Placements: They offer both temporary (contractual) and permanent job placements based on your preference.\n";
    cout << "   5. Salary Negotiation: Many agencies help with salary negotiations, ensuring that you are paid fairly based on your skills and market trends.\n";
    cout << "   6. Industry Insights: They provide you with the latest trends and opportunities in your field.\n";
}


void ngoBasedEmploymentServices() {
    int choice;
    do {
        cout << "NGO-based Employment Services:\n";
        cout << "1. Overview of NGO-based Employment Services\n";
        cout << "2. Popular NGOs Offering Employment Services\n";
        cout << "3. How to Register for NGO-based Employment Programs\n";
        cout << "4. Types of Services Provided by NGOs\n";
        cout << "5. Back to Job Opportunities Menu\n";
        cout<<"=========================================="<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"------------------------------------------"<<endl;

        switch (choice) {
            case 1:
                ngoEmploymentOverview();
                break;
            case 2:
                popularNgoEmploymentServices();
                break;
            case 3:
                ngoRegistrationProcess();
                break;
            case 4:
                ngoEmploymentServices();
                break;
            case 5:
                cout << "Returning to Job Opportunities Menu...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);
}

void ngoEmploymentOverview() {
    cout << "NGO-based employment services focus on providing job opportunities and skill training to marginalized communities, including residents of slums, rural areas, and those facing social and economic disadvantages.\n";
    cout << "These services are usually offered by non-governmental organizations (NGOs) aiming to uplift individuals by helping them find sustainable employment.\n";
    cout << "NGOs may collaborate with local businesses, government bodies, and vocational training centers to provide these opportunities.\n";
}

void popularNgoEmploymentServices() {
    cout << "Some popular NGOs that provide employment services include:\n";
    cout << "   1. **Goonj**: Works with marginalized communities to provide skills training and employment opportunities in sectors such as retail, construction, and more.\n";
    cout << "   2. **Pratham**: Known for its educational initiatives, Pratham also offers vocational training programs to help individuals secure jobs.\n";
    cout << "   3. **Save the Children India**: Focuses on providing career counseling and skill training to vulnerable populations, including those from slums and rural areas.\n";
    cout << "   4. **Bachpan Bachao Andolan**: Apart from child labor prevention, this organization offers skills training and employment opportunities for young adults.\n";
    cout << "   5. **SEWA (Self Employed Women's Association)**: Provides training and resources for women in slum areas to become self-employed or find jobs in industries such as textiles and handicrafts.\n";
}

void ngoRegistrationProcess() {
    cout << "To register for NGO-based employment services, follow these steps:\n";
    cout << "   1. **Identify a Suitable NGO**: Research NGOs in your area that offer employment services tailored to your skills or industry preferences.\n";
    cout << "   2. **Visit the NGO's Website or Office**: Some NGOs have online registration portals, while others may require you to visit in person.\n";
    cout << "   3. **Submit Required Documents**: NGOs often ask for identification proof, educational qualifications, and a brief resume or work experience.\n";
    cout << "   4. **Attend Skill Training (if required)**: Some NGOs offer skill training programs as part of their employment services. Be prepared to attend these workshops if necessary.\n";
    cout << "   5. **Placement Assistance**: After registering and completing any necessary training, the NGO will connect you with job opportunities based on your skills and interests.\n";
}

void ngoEmploymentServices() {
    cout << "NGOs offer a wide range of services to help individuals in slums and rural areas find employment:\n";
    cout << "   1. **Job Placement Assistance**: NGOs collaborate with local businesses, government projects, and corporate organizations to connect individuals with available jobs.\n";
    cout << "   2. **Skill Development and Training**: Many NGOs offer free or subsidized vocational training programs to help individuals acquire new skills for specific job sectors.\n";
    cout << "   3. **Career Counseling**: NGOs may provide career counseling and job search advice to help individuals understand career paths and job market trends.\n";
    cout << "   4. **Internship and Apprenticeship Programs**: Some NGOs arrange internships and apprenticeships for individuals to gain hands-on work experience before securing full-time jobs.\n";
    cout << "   5. **Entrepreneurship Support**: Certain NGOs also offer training and financial assistance to help individuals start their own businesses.\n";
    cout << "   6. **Networking Opportunities**: NGOs often host job fairs, networking events, and community outreach programs to connect job seekers with employers.\n";
}

// Forgot password function
void forgotPassword(const string& fileName) {
    string name;
    cout << "Enter your username to reset the password: ";
    cin.ignore();
    getline(cin, name);

    if (retrievePassword(name, fileName) == "") {
        cout << "User not found!" << endl;
        return;
    }

    string newPassword;
    cout << "Enter new password: ";
    getline(cin, newPassword);

    // Reset the password in the file
    ifstream inputFile(fileName);
    ofstream outputFile("temp_" + fileName);
    string line, userName, userPassword;
    bool userFound = false;

    while (getline(inputFile, line)) {
        stringstream ss(line);
        getline(ss, userName, ',');
        getline(ss, userPassword, ',');

        if (userName == name) {
            outputFile << userName << "," << newPassword << "\n";
            userFound = true;
        } else {
            outputFile << line << "\n";
        }
    }

    inputFile.close();
    outputFile.close();

    if (userFound) {
        remove(fileName.c_str());
        rename(("temp_" + fileName).c_str(), fileName.c_str());
        cout << "Password reset successfully!" << endl;
    } else {
        cout << "User not found!" << endl;
    }
}

// Register user function (simplified)
void registerUser(const string& fileName) {
    string name, password;
    cout << "Enter a new username: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter a new password: ";
    getline(cin, password);

    ofstream file(fileName, ios::app);
    if (!file.is_open()) {
        cerr << "Error opening file!" << endl;
        return;
    }

    file << name << "," << password << "\n";
    file.close();
    cout << "User registered successfully!" << endl;
}

// Admin menu

// Reset password for an admin
void resetPassword(const string& fileName, const string& userName) {
    string password = retrievePassword(userName, fileName);
    if (password.empty()) {
        cout << "User not found!" << endl;
    } else {
        cout << "Enter new password for " << userName << ": ";
        string newPassword;
        cin.ignore();
        getline(cin, newPassword);

        // Reset the password in the file
        ifstream inputFile(fileName);
        ofstream outputFile("temp_" + fileName);
        string line;
        bool userFound = false;

        while (getline(inputFile, line)) {
            stringstream ss(line);
            string currentUser, currentPassword;
            getline(ss, currentUser, ',');
            getline(ss, currentPassword, ',');

            if (currentUser == userName) {
                outputFile << currentUser << "," << newPassword << "\n";
                userFound = true;
            } else {
                outputFile << line << "\n";
            }
        }

        inputFile.close();
        outputFile.close();

        if (userFound) {
            remove(fileName.c_str());
            rename(("temp_" + fileName).c_str(), fileName.c_str());
            cout << "Password reset successfully!" << endl;
        } else {
            cout << "User not found!" << endl;
        }
    }
}

// Function to simulate user login (searching via linear search)

// Function to register new users (using Merge Sort)
void registeruser(const string& fileName) {
    string username, password;
    cout << "Enter new username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    // Store user data (for simplicity, just append it to the file)
    ofstream file(fileName, ios::app);
    file << username << ":" << password << endl;
    file.close();

    cout << "User registered successfully!" << endl;
}

// Merge Sort Function
void merge(vector<string>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Recursively sort the first and second halves
        merge(arr, left, mid);
        merge(arr, mid + 1, right);

        // Merge the sorted halves
        vector<string> leftArr(arr.begin() + left, arr.begin() + mid + 1);
        vector<string> rightArr(arr.begin() + mid + 1, arr.begin() + right + 1);

        int i = 0, j = 0, k = left;

        // Merge the left and right arrays back into the original array
        while (i < leftArr.size() && j < rightArr.size()) {
            if (leftArr[i] <= rightArr[j]) {
                arr[k] = leftArr[i];
                i++;
            } else {
                arr[k] = rightArr[j];
                j++;
            }
            k++;
        }

        // Copy remaining elements if any
        while (i < leftArr.size()) {
            arr[k] = leftArr[i];
            i++;
            k++;
        }
        while (j < rightArr.size()) {
            arr[k] = rightArr[j];
            j++;
            k++;
        }
    }
}

// Function to display sorted users (using Merge Sort)

// Main menu
void showMenu() {
    string fileName = "C:\\Users\\anjal\\OneDrive\\Desktop\\Daa project\\user.txt";
    unordered_map<string, int> failedAttempts; // Tracks failed login attempts
    int choice;

    do {
        cout << "\n=============== MAIN MENU ===============\n";
        cout << "                 1. Login\n";
        cout << "                 2. Forgot Password\n";
        cout << "                 3. Register\n";
        cout << "                 4. Admin Login\n";
        cout << "                 5. Exit\n";
        cout << "==========================================\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "------------------------------------------\n";

        switch (choice) {
            case 1:
                login(fileName, failedAttempts);
                break;
            case 2:
                forgotPassword(fileName);
                break;
            case 3:
                registerUser(fileName);
                break;
            case 4:
                adminMenu(fileName);
                break;
            case 5:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);
}

