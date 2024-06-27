#include <iostream>
#include <vector>
#include <tuple>
#include <string>

using namespace std;

static void displayInventory(const vector<tuple<int, string, double, string>>& inventory)
{
    for (const auto& item : inventory)
    {
        int id;
        string name, unit;
        double quantity;

        tie(id, name, quantity, unit) = item;

        cout << id << "\t\t" << name << "\t" << quantity << "\t" << unit << endl;
    }
}

void clearInventory(vector<tuple<int, string, double, string>>& inventory) {
    inventory.clear();
}

static void displayMenu(const string menu[], int menuSize)
{
    cout << "Welcome to the" << endl;
    cout << "Restaurant Recipe Inventory Solution" << endl;

    for (int i = 0; i < menuSize; ++i)
    {
        cout << i + 1 << " = " << menu[i] << endl;
    }

    cout << "Please enter the number here: ";
}

static void displayRecipe(const string recipe[], int recipeSize, const int recipeServing[])
{
    for (int i = 0; i < recipeSize; ++i)
    {
        cout << i + 1 << ". " << recipe[i] << "\t" << recipeServing[i] << endl;
    }
}

static void displayFPR(const vector<tuple<int, string, double, string>>& inventory, int inventorySize, int get);
static void displayMCC(const vector<tuple<int, string, double, string>>& inventory, int inventorySize, int get);
static void displaySMWW(const vector<tuple<int, string, double, string>>& inventory, int inventorySize, int get);
static void dsiplayFOCB(const vector<tuple<int, string, double, string>>& inventory, int inventorySize, int get);
static void displaySC(const vector<tuple<int, string, double, string>>& inventory, int inventorySize, int get);

void getUserRecipe(int userRecipe, const vector<tuple<int, string, double, string>>& inventory, int inventorySize)
{
        if (userRecipe == 1)
        {
            displayFPR(inventory, inventorySize, userRecipe);
            
        }
        else if (userRecipe == 2)
        {
            displayMCC(inventory, inventorySize, userRecipe);

      
        }
        else if (userRecipe == 3)
        {
            displaySMWW(inventory, inventorySize, userRecipe);

        }
        else if (userRecipe == 4)
        {
            dsiplayFOCB(inventory, inventorySize, userRecipe);

        }
        else if (userRecipe == 5)
        {
            displaySC(inventory, inventorySize, userRecipe);

       
        }
        else
        {
            cout << "Invalid Entry" << endl;
        }
  
}



static void displayFPR(const vector<tuple<int, string, double, string>>& inventory, int inventorySize, int get)
{
    int fprIndex[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

    cout << "Inventory ID\t" << "Name\t" << "Quantity\t" << "Unit" << endl;

    for (int i = 0; i < inventorySize; ++i)
    {
        int id = std::get<0>(inventory[i]); // Accessing the first element of the tuple (ID)
        string name = std::get<1>(inventory[i]);
        double quantity = std::get<2>(inventory[i]);
        string unit = std::get<3>(inventory[i]);

        for (int j = 0; j < sizeof(fprIndex) / sizeof(fprIndex[0]); ++j)
        {
            if (id == fprIndex[j])
            {
                cout << id << "\t" << name << "\t" << quantity << "\t" << unit << endl;
                break; // Exit the inner loop if the ID is found
            }
        }
    }
}

static void displayMCC(const vector<tuple<int, string, double, string>>& inventory, int inventorySize, int get)
{
    int mccIndex[] = { 9, 10, 11, 12, 13, 14, 15, 6, 16, 17, 18 };

    cout << "Inventory ID\t" << "Name\t" << "Quantity\t" << "Unit" << endl;

    for (int i = 0; i < inventorySize; ++i)
    {
        int id = std::get<0>(inventory[i]); // Accessing the first element of the tuple (ID)
        string name = std::get<1>(inventory[i]);
        double quantity = std::get<2>(inventory[i]);
        string unit = std::get<3>(inventory[i]);

        for (int j = 0; j < sizeof(mccIndex) / sizeof(mccIndex[0]); ++j)
        {
            if (id == mccIndex[j])
            {
                cout << id << "\t" << name << "\t" << quantity << "\t" << unit << endl;
                break; // Exit the inner loop if the ID is found
            }
        }
    }
}

static void displaySMWW(const vector<tuple<int, string, double, string>>& inventory, int inventorySize, int get)
{
    int smwwIndex[] = { 19, 20, 21, 22, 7, 23, 24, 25 };

    cout << "Inventory ID\t" << "Name\t" << "Quantity\t" << "Unit" << endl;

    for (int i = 0; i < inventorySize; ++i)
    {
        int id = std::get<0>(inventory[i]); // Accessing the first element of the tuple (ID)
        string name = std::get<1>(inventory[i]);
        double quantity = std::get<2>(inventory[i]);
        string unit = std::get<3>(inventory[i]);

        for (int j = 0; j < sizeof(smwwIndex) / sizeof(smwwIndex[0]); ++j)
        {
            if (id == smwwIndex[j])
            {
                cout << id << "\t" << name << "\t" << quantity << "\t" << unit << endl;
                break; // Exit the inner loop if the ID is found
            }
        }
    }
}

static void dsiplayFOCB(const vector<tuple<int, string, double, string>>& inventory, int inventorySize, int get)
{
    int focbIndex[] = { 26, 11, 16, 27, 28, 6, 7, 29 };

    cout << "Inventory ID\t" << "Name\t" << "Quantity\t" << "Unit" << endl;

    for (int i = 0; i < inventorySize; ++i)
    {
        int id = std::get<0>(inventory[i]); // Accessing the first element of the tuple (ID)
        string name = std::get<1>(inventory[i]);
        double quantity = std::get<2>(inventory[i]);
        string unit = std::get<3>(inventory[i]);

        for (int j = 0; j < sizeof(focbIndex) / sizeof(focbIndex[0]); ++j)
        {
            if (id == focbIndex[j])
            {
                cout << id << "\t" << name << "\t" << quantity << "\t" << unit << endl;
                break; // Exit the inner loop if the ID is found
            }
        }
    }
}

static void displaySC(const vector<tuple<int, string, double, string>>& inventory, int inventorySize, int get)
{
    int scIndex[] = { 30, 31, 32, 33, 34, 35, 36, 37, 38, 6, 39 };

    cout << "Inventory ID\t" << "Name\t" << "Quantity\t" << "Unit" << endl;

    for (int i = 0; i < inventorySize; ++i)
    {
        int id = std::get<0>(inventory[i]); // Accessing the first element of the tuple (ID)
        string name = std::get<1>(inventory[i]);
        double quantity = std::get<2>(inventory[i]);
        string unit = std::get<3>(inventory[i]);

        for (int j = 0; j < sizeof(scIndex) / sizeof(scIndex[0]); ++j)
        {
            if (id == scIndex[j])
            {
                cout << id << "\t" << name << "\t" << quantity << "\t" << unit << endl;
                break; // Exit the inner loop if the ID is found
            }
        }
    }
}

static void addItem(vector<tuple<int, string, double, string>>& inventory)
{
    int id = 1; // Default ID for the first item
    if (!inventory.empty()) {
        id = get<0>(inventory.back()) + 1; // Generate ID from the previous ID
    }

    string name, unit;
    double quantity;

    // Get item details from user
    cout << "Enter the name of the inventory: ";
    cin >> name;
    cout << "Enter the quantity: ";
    cin >> quantity;
    cout << "Enter the unit: ";
    cin >> unit;

    // Add the item to the inventory
    inventory.push_back(make_tuple(id, name, quantity, unit));
    cout << "Item added to inventory with ID " << id << "." << endl;
}

static void removeItem(vector<tuple<int, string, double, string>>& inventory, int idToRemove);

static void removeItemIndex(vector<tuple<int, string, double, string>>& inventory, const int tempIndex[], int tempSize)
{
    for (int i = 0; i < tempSize; ++i)
    {
        removeItem(inventory, tempIndex[i]);
    }
}

static void removeItem(vector<tuple<int, string, double, string>>& inventory, int idToRemove)
{
    auto it = remove_if(inventory.begin(), inventory.end(), [idToRemove](const tuple<int, string, double, string>& item) {
        return get<0>(item) == idToRemove;
        });

    inventory.erase(it, inventory.end());
}


static void removeItemUpdate(vector<tuple<int, string, double, string>>& inventory, int userIDremove)
{
    for (auto it = inventory.begin(); it != inventory.end(); ++it)
    {
        if (get<0>(*it) == userIDremove)
        {
            inventory.erase(it);
            cout << "Item with ID " << userIDremove << " removed from inventory." << endl;
            return;
        }
    }
    cout << "Item with ID " << userIDremove << " not found in inventory." << endl;
}

static void displayFPRmultiplied(const vector<tuple<int, string, double, string>>& inventory, int inventorySize, double multiplier)
{
    int fprIndex[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

    cout << "Inventory ID\t" << "Name\t" << "Quantity\t" << "Unit" << endl;

    for (int i = 0; i < inventorySize; ++i)
    {
        int id = std:: get<0>(inventory[i]); // Accessing the first element of the tuple (ID)
        string name = std::get<1>(inventory[i]);
        double quantity = std::get<2>(inventory[i]);
        string unit = std::get<3>(inventory[i]);

        for (int j = 0; j < sizeof(fprIndex) / sizeof(fprIndex[0]); ++j)
        {
            if (id == fprIndex[j])
            {
                cout << id << "\t" << name << "\t" << quantity * multiplier << "\t" << unit << endl;
                break; // Exit the inner loop if the ID is found
            }
        }
    }
}

static void displayMCCmultiplied(const vector<tuple<int, string, double, string>>& inventory, int inventorySize, double multiplier)
{
    int mccIndex[] = { 9, 10, 11, 12, 13, 14, 15, 6, 16, 17, 18 };

    cout << "Inventory ID\t" << "Name\t" << "Quantity\t" << "Unit" << endl;

    for (int i = 0; i < inventorySize; ++i)
    {
        int id = std::get<0>(inventory[i]); // Accessing the first element of the tuple (ID)
        string name = std::get<1>(inventory[i]);
        double quantity = std::get<2>(inventory[i]);
        string unit = std::get<3>(inventory[i]);

        for (int j = 0; j < sizeof(mccIndex) / sizeof(mccIndex[0]); ++j)
        {
            if (id == mccIndex[j])
            {
                cout << id << "\t" << name << "\t" << quantity * multiplier << "\t" << unit << endl;
                break; // Exit the inner loop if the ID is found
            }
        }
    }
}

static void displaySMWmultiplied(const vector<tuple<int, string, double, string>>& inventory, int inventorySize, double multiplier)
{
    int smwwIndex[] = { 19, 20, 21, 22, 7, 23, 24, 25 };

    cout << "Inventory ID\t" << "Name\t" << "Quantity\t" << "Unit" << endl;

    for (int i = 0; i < inventorySize; ++i)
    {
        int id = std::get<0>(inventory[i]); // Accessing the first element of the tuple (ID)
        string name = std::get<1>(inventory[i]);
        double quantity = std::get<2>(inventory[i]);
        string unit = std::get<3>(inventory[i]);

        for (int j = 0; j < sizeof(smwwIndex) / sizeof(smwwIndex[0]); ++j)
        {
            if (id == smwwIndex[j])
            {
                cout << id << "\t" << name << "\t" << quantity * multiplier<< "\t" << unit << endl;
                break; // Exit the inner loop if the ID is found
            }
        }
    }
}

static void dsiplayFOCBmultiplied(const vector<tuple<int, string, double, string>>& inventory, int inventorySize, double multiplier)
{
    int focbIndex[] = { 26, 11, 16, 27, 28, 6, 7, 29 };

    cout << "Inventory ID\t" << "Name\t" << "Quantity\t" << "Unit" << endl;

    for (int i = 0; i < inventorySize; ++i)
    {
        int id = std::get<0>(inventory[i]); // Accessing the first element of the tuple (ID)
        string name = std::get<1>(inventory[i]);
        double quantity = std::get<2>(inventory[i]);
        string unit = std::get<3>(inventory[i]);

        for (int j = 0; j < sizeof(focbIndex) / sizeof(focbIndex[0]); ++j)
        {
            if (id == focbIndex[j])
            {
                cout << id << "\t" << name << "\t" << quantity * multiplier << "\t" << unit << endl;
                break; // Exit the inner loop if the ID is found
            }
        }
    }
}

static void displaySCmultiplied(const vector<tuple<int, string, double, string>>& inventory, int inventorySize, double multiplier)
{
    int scIndex[] = { 30, 31, 32, 33, 34, 35, 36, 37, 38, 6, 39 };

    cout << "Inventory ID\t" << "Name\t" << "Quantity\t" << "Unit" << endl;

    for (int i = 0; i < inventorySize; ++i)
    {
        int id = std::get<0>(inventory[i]); // Accessing the first element of the tuple (ID)
        string name = std::get<1>(inventory[i]);
        double quantity = std::get<2>(inventory[i]);
        string unit = std::get<3>(inventory[i]);

        for (int j = 0; j < sizeof(scIndex) / sizeof(scIndex[0]); ++j)
        {
            if (id == scIndex[j])
            {
                cout << id << "\t" << name << "\t" << quantity * multiplier << "\t" << unit << endl;
                break; // Exit the inner loop if the ID is found
            }
        }
    }
}

using InventoryItem = tuple<int, string, double, string>;

int main()
{
    string menu[] = { "Recipe", "Order", "Computation", "Inventory" };
    int menuSize = sizeof(menu) / sizeof(menu[0]);

    string recipe[] = { "Classic French Pork Rillettes", "Classic Maryland Crab Cakes", "Steamed Mussels in White Wine", "Fried Oysters With Cornmeal Batter", "Shrimp Ceviche" };
    int recipeServing[] = { 8, 6, 4, 6, 6 };
    int recipeSize = sizeof(recipe) / sizeof(recipe[0]);

    vector<tuple<int, string, double, string>> inventory = {
        make_tuple(1, "Lean Pork", 1.5, "lbs"),
        make_tuple(2, "Pork Fat", 0.75, "lbs"),
        make_tuple(3, "Duck Legs", 0.5, "cups"),
        make_tuple(4, "Water", 0.75, "tspns"),
        make_tuple(5, "Thyme", 1.5, "tspns"),
        make_tuple(6, "Salt", 1.25, "tspns"),
        make_tuple(7, "Black Pepper", 0.75, "tspns"),
        make_tuple(8, "Bay Leaf", 1, "pcs"),
        make_tuple(9, "Crab Meat", 1, "lbs"),
        make_tuple(10, "Saltine Crackers", 8, "pcs"),
        make_tuple(11, "Eggs", 1, "pcs"),
        make_tuple(12, "Mayonnaise", 2, "tbsps"),
        make_tuple(13, "Dijon Mustard", 1, "tspns"),
        make_tuple(14, "Old Bay Seasoning", 0.5, "tspns"),
        make_tuple(15, "Worcestershire Sauce", 0.25, "tspns"),
        make_tuple(16, "Vegetable Oil", 1, "tbsps"),
        make_tuple(17, "Lemon", 1, "pcs"),
        make_tuple(18, "Tartar Sauce", 1, "pcs"),
        make_tuple(19, "Mussels", 4, "lbs"),
        make_tuple(20, "White Wine", 0.5, "cups"),
        make_tuple(21, "Garlic", 1, "pcs"),
        make_tuple(22, "Shallots", 0.25, "cups"),
        make_tuple(23, "Unsalted Butter", 4, "tbsps"),
        make_tuple(24, "Parsley", 2, "tbsps"),
        make_tuple(25, "Lemon Juice", 0.25, "cups"),
        make_tuple(26, "Oysters", 2, "cups"),
        make_tuple(27, "Cornmeal", 1.5, "cups"),
        make_tuple(28, "All-Purpose Flour", 2, "tbsps"),
        make_tuple(29, "Granulated Sugar", 1, "tspns"),
        make_tuple(30, "Shrimp", 1, "lbs"),
        make_tuple(31, "Lime Juice", 0.5, "cups"),
        make_tuple(32, "Tomatoes", 2, "pcs"),
        make_tuple(33, "Cucumber", 0.5, "pcs"),
        make_tuple(34, "Red Onions", 0.5, "pcs"),
        make_tuple(35, "Avocado", 0.5, "pcs"),
        make_tuple(36, "Serrano Chile", 1, "pcs"),
        make_tuple(37, "Cilantro", 0.5, "cups"),
        make_tuple(38, "Olive Oil", 7, "tbsps"),
        make_tuple(39, "Tortillas", 12, "pcs"),
    };

    int inventorySize = sizeof(inventory);

    int userMenuInt;

    while (true)
    {
        displayMenu(menu, menuSize);
        if (!(cin >> userMenuInt))
        {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        cout << endl;

        if (userMenuInt == 1)
        {
            int recipeCon;
            
            while (true)
            {
                cout << "Recipe ID\t\t" << "Recipe Name\t" << "Servings" << endl;
                displayRecipe(recipe, recipeSize, recipeServing);

                cout << "Please enter Recipe ID to view ingredients: ";
                int userRecipe;
                cin >> userRecipe;
                getUserRecipe(userRecipe, inventory, inventorySize);

                cout << "Do you want to try again? 1 = Yes / 2 = No: ";
                cin >> recipeCon;
                cout << endl;

                if (recipeCon != 1)
                {
                    main();
                }
            }

        }
        else if (userMenuInt == 2)
        {
            int userOrder;

            int fprIndex[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
            int fprSize = sizeof(fprIndex) / sizeof(fprIndex[0]);

            int mccIndex[] = { 9, 10, 11, 12, 13, 14, 15, 6, 16, 17, 18 };
            int mccSize = sizeof(mccIndex) / sizeof(mccIndex[0]);

            int smwwIndex[] = { 19, 20, 21, 22, 7, 23, 24, 25 };
            int smwwSize = sizeof(smwwIndex) / sizeof(smwwIndex[0]);

            int focbIndex[] = { 26, 11, 16, 27, 28, 6, 7, 29 };
            int focbSize = sizeof(focbIndex) / sizeof(focbIndex[0]);

            int scIndex[] = { 30, 31, 32, 33, 34, 35, 36, 37, 38, 6, 39 };
            int scSize = sizeof(scIndex) / sizeof(scIndex[0]);

            while (true)
            {
                int orderCon, orderChoice;

                cout << "Recipe ID\t\t" << "Recipe Name\t" << "Servings" << endl;
                displayRecipe(recipe, recipeSize, recipeServing);

                cout << "Please enter the Recipe ID you wish to order: ";
                cin >> userOrder;
                cout << endl;

                if (userOrder == 1)
                {
                    removeItemIndex(inventory, fprIndex, fprSize);

                    cout << "Inventory Updated: " << endl;

                    displayInventory(inventory);

                    cout << "Do you want to try again? 1 = Yes / 2 = No: ";
                    cin >> orderChoice;
                    cout << endl;

                    if (orderChoice != 1)
                    {
                        main();
                    }
                }
                else if (userOrder == 2)
                {
                    removeItemIndex(inventory, mccIndex, mccSize);

                    cout << "Inventory Updated: " << endl;

                    displayInventory(inventory);

                    cout << "Do you want to try again? 1 = Yes / 2 = No: ";
                    cin >> orderChoice;
                    cout << endl;

                    if (orderChoice != 1)
                    {
                        main();
                    }
                }
                else if (userOrder == 3)
                {
                    removeItemIndex(inventory, smwwIndex, smwwSize);

                    cout << "Inventory Updated: " << endl;

                    cout << "Do you want to try again? 1 = Yes / 2 = No: ";
                    cin >> orderChoice;
                    cout << endl;

                    if (orderChoice != 1)
                    {
                        main();
                    }
                }
                else if (userOrder == 4)
                {
                    removeItemIndex(inventory, focbIndex, focbSize);

                    cout << "Inventory Updated: " << endl;

                    displayInventory(inventory);

                    cout << "Do you want to try again? 1 = Yes / 2 = No: ";
                    cin >> orderChoice;
                    cout << endl;

                    if (orderChoice != 1)
                    {
                        main();
                    }
                }
                else if (userOrder == 5)
                {
                    removeItemIndex(inventory, scIndex, scSize);

                    cout << "Inventory Updated: " << endl;

                    displayInventory(inventory);

                    cout << "Do you want to try again? 1 = Yes / 2 = No: ";
                    cin >> orderChoice;
                    cout << endl;

                    if (orderChoice != 1)
                    {
                        main();
                    }
                }
                else
                {
                    cout << "Invalid! Please try again!" << endl;
                }
            }
        }
        else if (userMenuInt == 3)
        {
            while(true)
            {
                double userCompute;
                int computeCon;

                cout << "Recipe ID\t\t" << "Recipe Name\t" << "Servings" << endl;
                displayRecipe(recipe, recipeSize, recipeServing);

                cout << "Please enter Recipe ID to view ingredients: ";
                double userRecipe;
                cin >> userRecipe;
                getUserRecipe(userRecipe, inventory, inventorySize);

                cout << "Please enter the number of servings to compute?: ";
                cin >> userCompute;
                cout << endl;

                //{ 8, 6, 4, 6, 6 };

                if (userRecipe == 1)
                {
                    double multiplier = userCompute / 8;

                    displayFPRmultiplied(inventory, inventorySize, multiplier);

                    cout << "Do you want to try again? 1 = Yes / 2 = No: ";
                    cin >> computeCon;
                    cout << endl;

                    if (computeCon != 1)
                    {
                        main();
                    }
                }
                else if (userRecipe == 2)
                {
                    double multiplier = userCompute / 6;

                    displayMCCmultiplied(inventory, inventorySize, multiplier);

                    cout << "Do you want to try again? 1 = Yes / 2 = No: ";
                    cin >> computeCon;
                    cout << endl;

                    if (computeCon != 1)
                    {
                        main();
                    }
                }
                else if (userRecipe == 3)
                {
                    double multiplier = userCompute / 4;

                    displaySMWmultiplied(inventory, inventorySize, multiplier);

                    cout << "Do you want to try again? 1 = Yes / 2 = No: ";
                    cin >> computeCon;
                    cout << endl;

                    if (computeCon != 1)
                    {
                        main();
                    }
                }
                else if (userRecipe == 4)
                {
                    double multiplier = userCompute / 6;

                    dsiplayFOCBmultiplied(inventory, inventorySize, multiplier);

                    cout << "Do you want to try again? 1 = Yes / 2 = No: ";
                    cin >> computeCon;
                    cout << endl;

                    if (computeCon != 1)
                    {
                        main();
                    }
                }
                else if (userRecipe == 5)
                {
                    double multiplier = userCompute / 6;

                    displaySCmultiplied(inventory, inventorySize, multiplier);

                    cout << "Do you want to try again? 1 = Yes / 2 = No: ";
                    cin >> computeCon;
                    cout << endl;

                    if (computeCon != 1)
                    {
                        main();
                    }
                }
                else
                    cout << "Invalide! Please try again!" << endl;
            }
        }
        else if (userMenuInt == 4)
        {
            while (true)
            {
                int userInvenChoice;
                int inventoryCon;

                cout << "Inventory ID\t" << "Name\t" << "Quantity\t" << "Unit" << endl;
                displayInventory(inventory);

                cout << "Do you want to add or remove from the inventory? 1 = Add / 2 = Remove: ";
                cin >> userInvenChoice;
                cout << endl;

                if (userInvenChoice == 1)
                {
                    addItem(inventory);

                    cout << "Do you want to try again? 1 = Yes / 2 = No: ";
                    cin >> inventoryCon;
                    cout << endl;

                    if (inventoryCon != 1)
                    {
                        main();
                    }
                }
                else if (userInvenChoice == 2)
                {
                    int userIDremove;

                    cout << "Please enter the id number: ";
                    cin >> userIDremove;
                    cout << endl;

                    removeItem(inventory, userIDremove);

                    cout << "Do you want to try again? 1 = Yes / 2 = No: ";
                    cin >> inventoryCon;
                    cout << endl;

                    if (inventoryCon != 1)
                    {
                        main();
                    }
                }
            }
            
        }
        else
        {
            cout << "Invalid choice. Please try again." << endl;
        }

        if (userMenuInt != 4)
            break;
    }

    clearInventory(inventory);

    return 0;
}
