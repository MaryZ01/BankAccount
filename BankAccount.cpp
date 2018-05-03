using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
//using System.Globalization;

namespace Proj1_classes
{
    public class Account : IComparable, IFormattable      //public?
                                                          // ToString(), Tostring(string, IFormatProvider), CompareTo(object)
    {
        protected static int count_acc = 0;            //підраховує к-сть об'єктів
        protected static double commission = 1.75;        //комісія в банку

        protected string ID;
        protected string Name;
        protected double Balance;      //{ get; }?
        protected DateTime CreationDate;

        public Account()
        {
            ID = "#";
            Name = "";
            Balance = 0;
            CreationDate = new DateTime();
            count_acc++;
        }

        public Account(string id, string name, double _bal, DateTime dt = new DateTime())
        {
            ID = id;
            Name = name;
            Balance = _bal;
            CreationDate = dt;
            count_acc++;
        }
        
        public string AccessID
        {
            get
            {
                return ID;
            }
        }

        public string AccessName
        {
            get
            {
                return Name;
            }
            protected set
            {
                Name = value;
            }
        }

        public double AccessBalance
        {
            get
            {
                return Balance;
            }
        }
        
        public virtual void Print()

        {

            Console.WriteLine("\nAccount: ");

            Console.WriteLine("ID:      " + ID);

            Console.WriteLine("Name:    " + Name);

            Console.WriteLine("Balance: " + Balance);

            Console.WriteLine("Created: " + CreationDate.ToShortDateString());

        }
    }
}        
